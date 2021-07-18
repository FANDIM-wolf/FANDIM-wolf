from bs4 import BeautifulSoup
import requests


url = "https://www.esquire.com/entertainment/music/g36135549/best-songs-2021/"

req =  requests.get(url)
src =  BeautifulSoup(req.text,'lxml')
songs = src.find_all('span',class_='listicle-slide-hed-text')

print(songs)
for song in songs:
    print(song.text)