import re

# Function to extract usernames from HTML file
def extract_usernames_from_html(html_file):
    with open(html_file, 'r', encoding='utf-8') as file:
        html_content = file.read()
    return re.findall(r'href="https://www\.instagram\.com/([^"]+)"', html_content)

# Specify file paths for followers.html and following.html
followers_file_path = 'followers_1.html'
following_file_path = 'following.html'

# Extract usernames from followers.html and following.html
followers_usernames = extract_usernames_from_html(followers_file_path)
print('followers_usernames:')
print(followers_usernames)
following_usernames = extract_usernames_from_html(following_file_path)
print('followers_usernames:')
print(followers_usernames)

# Find usernames that are in following but not in followers
unfollowed_usernames = set(following_usernames) - set(followers_usernames)

# Print the usernames not in followers.html
print("Usernames not in followers.html:")
for username in unfollowed_usernames:
    print(username)

