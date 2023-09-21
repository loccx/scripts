def permute(string):
    count = 0
    dfs(string, [], count)
    return count

def dfs(string, path, count):
    if not path:
        count += 1
    for char in range(len(string):
