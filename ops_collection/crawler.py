import requests
from bs4 import BeautifulSoup


if __name__ == '__main__':
    url = 'https://tvm.apache.org/docs/reference/api/python/topi.html'
    response = requests.get(url)
    soup = BeautifulSoup(response.content,'html.parser')
    titles = [title.text for title in soup.find_all('dl',class_='py function')]
    print(len(titles))
    # print(titles[0])
    # print(titles[36])
    op_body = titles[0].strip()
    op_body = titles[0].split('\n')
    for idx,line in enumerate(op_body):
        if len(line)>0:
            print(line,f'[{idx}]')