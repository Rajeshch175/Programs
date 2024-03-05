# create.py

import os

import openai

PROMPT = "An eco-friendly computer from the 90s in the style of vaporwave"

openai.api_key = os.getenv("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")

response = openai.Image.create(
    prompt=PROMPT,
    n=1,
    size="256x256",
)

print(response["data"][0]["url"])