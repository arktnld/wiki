##* Redirection

python hello.py > output.txt   * stdout to (file)
python hello.py >> output.txt  * stdout to (file), append
python hello.py 2> error.log   * stderr to (file)
python hello.py 2>&1           * stderr to stdout
python hello.py 2>/dev/null    * stderr to (null)
python hello.py &>/dev/null    * stdout and stderr to (null)
