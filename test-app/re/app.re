open BsReactNative;

/* let () = BsExpo.Constants.constants##manifest |> Js.log |> ignore; */
/* BsExpo.Constants.constants##getWebViewUserAgentAsync() */
/* |> Js.Promise.then_(agent => { */
/*      Js.log(agent); */
/*      Js.Promise.resolve(); */
/*    }) */
/* |> ignore; */
/* [@bs.module "expo"] external constants : t = "Constants"; */
/* Js.log(constants##manifest); */
/* Js.log(constants##manifest); */
/* Js.log(BsExpo.Constants.constants); */
/* Js.log([%raw "require('expo').Constants"]); */
/* Js.log("Hello"); */
/* let () = { */
/*   let g = BsExpo.Audio.createSound(); */
/*   (); */
/* }; */
let () = ignore(BsExpo.Brightness.setBrightness(1.0));

/* |> Js.Promise.then_(() => Js.Promise.resolve()) */
/* , 500) */
let app = () =>
  <View
    style=Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]))>
    <Text value="Reason is awesome!" />
  </View>;
