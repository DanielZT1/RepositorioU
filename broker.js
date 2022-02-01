const mosca = require('mosca')

const broker = new mosca.Server({
    port: 9600
})

broker.on('ready', () => {
    console.log('Mosca is ready!!')
})

broker.on('clienteConnected', (client) => {
    console.log('New client: ' + client.id);
})

broker.on('published', (packet) => {
    console.log(packet.payload.toString());
})