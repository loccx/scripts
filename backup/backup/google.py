import requests
from bs4 import BeautifulSoup

def search_google(query):
    base_url = "https://www.google.com/search"
    params = {"q": query}
    
    try:
        print(base_url)
        print(params)
        response = requests.get(base_url, params=params)
        response.raise_for_status()
        
        soup = BeautifulSoup(response.text, "html.parser")
        search_results = soup.find_all("div", class_="tF2Cxc")

        for idx, result in enumerate(search_results, start=1):
            title = result.find("h3").text
            link = result.a["href"]
            print(f"{idx}. {title}")
            print(link)
            print()
    except requests.exceptions.RequestException as e:
        print("An error occurred:", e)

if __name__ == "__main__":
    search_query = input("Enter your search query: ")
    search_google(search_query)

