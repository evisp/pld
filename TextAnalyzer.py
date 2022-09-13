#!/usr/bin/python3

import string
from wordcloud import WordCloud, STOPWORDS
import matplotlib.pyplot as plt
from matplotlib.pyplot import figure
import pandas as pd

def read_text(filename):
    with open(filename) as file:
        lines = file.readlines()
    return str(lines)

def clean_text(text):
    cleaned_text = text.translate(str.maketrans('', '', string.punctuation))
    return cleaned_text

def word_count(text):
    word_frequency = {}
    words = text.split()

    for word in words:
        if word in word_frequency:
            word_frequency[word] += 1
        else:
            word_frequency[word] = 1

    return word_frequency

def generate_word_cloud(text):
    wordcloud = WordCloud().generate(text)

    figure(figsize=(12, 6), dpi=180)
    plt.imshow(wordcloud, interpolation='bilinear')
    plt.axis("off")
    plt.savefig("word_cloud.png")
    plt.show()

text = clean_text(read_text("text.txt"))
frequency = word_count(text)
generate_word_cloud(text)
