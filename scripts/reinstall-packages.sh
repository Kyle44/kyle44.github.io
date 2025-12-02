if exist package-lock.json rm package-lock.json
rm -rf node_modules
npm i -D -dd && npm i -dd
echo "Packages reinstalled"