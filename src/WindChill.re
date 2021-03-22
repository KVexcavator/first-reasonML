/* temperatyre Celcius */
let tmprt = 5;
/* wind velocity  km/hr */
let velocity = 20;
/* formula */
let windChill = 13.12 +. (0.6215 *. float_of_int(tmprt)) -. (11.37 *.(float_of_int(velocity)**0.16)) +. (0.3965 *. float_of_int(tmprt)*.(float_of_int(velocity)**0.16));

Js.log({j|At temperatyre $tmprt degrees C and wind speed $velocity km/hr, the wind chill temperatyre is $windChill. |j});