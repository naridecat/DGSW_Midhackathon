from logging import debug
from flask import Flask, render_template
import json
app = Flask(__name__)

@app.route('/')
def main():
    a = json.loads(open('temp','r').read())
    return render_template('index.html', temp=a[0], humi=a[1])

app.run(port=80, host='0.0.0.0', debug=True)