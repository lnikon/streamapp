FROM lnikon/stream_app:firsttry
ADD . /service

WORKDIR /service/utility

RUN ./install-oatpp-modules.sh

WORKDIR /service/build

RUN cmake ..
RUN make

EXPOSE 8000 8000

ENTRYPOINT ["./src/streamapp"]
