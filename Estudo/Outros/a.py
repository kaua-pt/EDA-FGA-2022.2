from pytube import YouTube
yt = YouTube('https://www.youtube.com/watch?v=bOoLFt0uqLs')
audio = yt.streams.filter(only_audio=True)[0]
audio.download()
