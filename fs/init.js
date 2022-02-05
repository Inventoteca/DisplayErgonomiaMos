/**
* Load timer api
*/
load('api_timer.js');
/**
* Load GPIO api
*/
load('api_gpio.js');
/**
* Load mq api
*/
load('api_mq135.js');

/**
* Set envirenement test temperature
*/
let temperature = 22;
/**
* Set envirenement test humidity 
*/
let humidity = 39;
/**
* Set pin to 0 (ADC of your device) 
*/
let pin = 0;


let rzero =0;

let correctedRZero = 0;

let resistance = 0;

let ppm = 0;

let correctedPPM = 0;

/**
* Conncet pin to MQ api
*/
MQ.MQ135.attach(pin);

/**
* Built-in LED GPIO pin configuration 
*/
//let led = ffi('int get_led_gpio_pin()')();  
//GPIO.set_mode(led, GPIO.MODE_OUTPUT);
//GPIO.write(led,0);

/**
* Read and print value of CO2 in ppm
* Call every 10 second
*/
Timer.set(10000, true, function() {

print('############################ Begin ############################\n');

//GPIO.toggle(led);

rzero = MQ.MQ135.getRZero();
correctedRZero = MQ.MQ135.getCorrectedRZero(temperature, humidity);
resistance = MQ.MQ135.getResistance();
ppm = MQ.MQ135.getPPM();
correctedPPM = MQ.MQ135.getCorrectedPPM(temperature, humidity);

print('MQ135 RZero: ',rzero,' Corrected RZero: ',correctedRZero,'\n');
print('Resistance: ',resistance," kohm\n");
print('PPM: ',ppm,' Corrected PPM: ',correctedPPM,' ppm\n');

print('############################ End ##############################\n');

}, null);


/*
import htm from './htm.min.js';
import {Component, h, render} from './preact.min.js';
const html = htm.bind(h);

class App extends Component 
{
  state = {connected: false, ssid: '', pass: '', spin: false, frames: []};
  
  componentDidMount() 
  {
    const logframe = (marker, frame) => 
    {
      this.setState(
          state => ({
            connected: state.connected,
            frames: state.frames.concat(marker + JSON.stringify(frame))
          }));
    };

    // Setup JSON-RPC engine
    var rpc = mkrpc('ws://' + location.host + '/rpc');
    
    rpc.onopen = ev => {
      // When RPC is connected, fetch list of supported RPC services
      this.setState({connected: true});
      rpc.call('RPC.List').then(res => console.log(res));
    };

    rpc.onclose = ev => this.setState({connected: false});
    rpc.onout = ev => logframe('-> ', ev);
    rpc.onin = ev => logframe('<- ', ev);
    this.rpc = rpc;
  }

  render(props, state) 
  {
    const onssid = ev => this.setState({ssid: ev.target.value});
    const onpass = ev => this.setState({pass: ev.target.value});
    const onclick = ev => 
    {
      // Button press. Update device's configuration

      //Log.debug('presionado');
      //var sta = {enable: false};
      var sta1 = {enable: true, ssid: state.ssid, pass: state.pass};
      //var config = {wifi: {sta1: sta1, sta:sta, ap: {enable: true}}};
      var config = {wifi: {sta1: sta1, ap: {enable: true}}};
      this.setState({spin: true});
      this.rpc.call('Config.Set', {config, save: true, reboot: true})
          .catch(err => alert('Error: ' + err))
          .then(ev => this.setState({spin: false}));
    };
    return html`
		<div class="container">
			<h1>${props.title}</h1>
			<div style="text-align: right; font-size:small;">Conectado:
				<b> ${state.connected ? 'yes' : 'no'}</b></div>

      <div style="display: flex; flex-direction: column; margin: 2em 0;">
				<div style="display: flex; margin: 0.2em 0;">
					<label style="width: 33%;">Red WiFi:</label>
					<input type="text"
					onInput=${onssid} style="flex:1;" />
				</div>

				<div style="display: flex; margin: 0.2em 0;">
					<label style="width: 33%;">WiFi contraseña:</label>
					<input type="text"
					onInput=${onpass} style="flex:1;" />
				</div>

				<button class="btn" style="margin: 0.3em 0; width: 100%;
				background: ${state.ssid ? '#2079b0' : '#ccc'}"
				onclick=${onclick} disabled=${!state.ssid}>
		<span class=${state.spin ? 'spin' : ''} /> Guardar configuración
				</button>
      </div>

			<h4>JSON-RPC over WebSocket log:</h4>
			<pre class="log">${state.frames.join('\n')}</pre>
		</div>`;
  }
}

render(html`<${App} title="Inventoteca SA de CV" />`, document.body);
*/