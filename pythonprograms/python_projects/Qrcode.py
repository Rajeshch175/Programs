import pyqrcode

qr=pyqrcode.create("https://www.youtube.com/@funandknowledge1970")
qr.png("Youtube.png")