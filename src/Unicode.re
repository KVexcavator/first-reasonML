let qty = 7;
let price = 14.50;
let discount =
  if (qty < 10 ) {
    0.05
  } else {
    0.10
  };

let total = float_of_int(qty) *. price;
let afterDiscount = total *. (1.0 -. discount);
/* any comments */
Js.log({js|Цена без скидки: |js} ++ Js.Float.toString(total) ++ {js| Руб|js});
Js.log({js|Цена без скидки: |js} ++ Js.Float.toString(afterDiscount) ++ {js| Руб|js});