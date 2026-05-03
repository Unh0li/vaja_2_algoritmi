FROM gcc:latest

WORKDIR /usr/src/myapp

COPY . .

RUN g++ -o moja_aplikacija main.cpp

CMD ["./moja_aplikacija"]
