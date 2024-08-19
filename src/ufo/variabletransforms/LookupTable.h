/*
 * (C) Crown copyright 2020 ,  Met Office
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 */

#ifndef UFO_VARIABLETRANSFORMS_LOOKUPTABLE_H_
#define UFO_VARIABLETRANSFORMS_LOOKUPTABLE_H_

namespace ufo {
namespace lookuptable {

// Table of saturation water vapour pressure [Pascale]
// Used in the derivation of saturated vapor pressure (SatVaporPres_fromTemp)
// using "formulas::MethodFormulation::LandoltBornstein"
static const float LandoltBornstein_lookuptable[] = {0.966483E-02 ,
0.966483E-02 , 0.984279E-02 , 0.100240E-01 , 0.102082E-01 , 0.103957E-01 ,
0.105865E-01 , 0.107803E-01 , 0.109777E-01 , 0.111784E-01 , 0.113825E-01 ,
0.115902E-01 , 0.118016E-01 , 0.120164E-01 , 0.122348E-01 , 0.124572E-01 ,
0.126831E-01 , 0.129132E-01 , 0.131470E-01 , 0.133846E-01 , 0.136264E-01 ,
0.138724E-01 , 0.141225E-01 , 0.143771E-01 , 0.146356E-01 , 0.148985E-01 ,
0.151661E-01 , 0.154379E-01 , 0.157145E-01 , 0.159958E-01 , 0.162817E-01 ,
0.165725E-01 , 0.168680E-01 , 0.171684E-01 , 0.174742E-01 , 0.177847E-01 ,
0.181008E-01 , 0.184216E-01 , 0.187481E-01 , 0.190801E-01 , 0.194175E-01 ,
0.197608E-01 , 0.201094E-01 , 0.204637E-01 , 0.208242E-01 , 0.211906E-01 ,
0.215631E-01 , 0.219416E-01 , 0.223263E-01 , 0.227172E-01 , 0.231146E-01 ,
0.235188E-01 , 0.239296E-01 , 0.243465E-01 , 0.247708E-01 , 0.252019E-01 ,
0.256405E-01 , 0.260857E-01 , 0.265385E-01 , 0.269979E-01 , 0.274656E-01 ,
0.279405E-01 , 0.284232E-01 , 0.289142E-01 , 0.294124E-01 , 0.299192E-01 ,
0.304341E-01 , 0.309571E-01 , 0.314886E-01 , 0.320285E-01 , 0.325769E-01 ,
0.331348E-01 , 0.337014E-01 , 0.342771E-01 , 0.348618E-01 , 0.354557E-01 ,
0.360598E-01 , 0.366727E-01 , 0.372958E-01 , 0.379289E-01 , 0.385717E-01 ,
0.392248E-01 , 0.398889E-01 , 0.405633E-01 , 0.412474E-01 , 0.419430E-01 ,
0.426505E-01 , 0.433678E-01 , 0.440974E-01 , 0.448374E-01 , 0.455896E-01 ,
0.463545E-01 , 0.471303E-01 , 0.479191E-01 , 0.487190E-01 , 0.495322E-01 ,
0.503591E-01 , 0.511977E-01 , 0.520490E-01 , 0.529145E-01 , 0.537931E-01 ,
0.546854E-01 , 0.555924E-01 , 0.565119E-01 , 0.574467E-01 , 0.583959E-01 ,
0.593592E-01 , 0.603387E-01 , 0.613316E-01 , 0.623409E-01 , 0.633655E-01 ,
0.644053E-01 , 0.654624E-01 , 0.665358E-01 , 0.676233E-01 , 0.687302E-01 ,
0.698524E-01 , 0.709929E-01 , 0.721490E-01 , 0.733238E-01 , 0.745180E-01 ,
0.757281E-01 , 0.769578E-01 , 0.782061E-01 , 0.794728E-01 , 0.807583E-01 ,
0.820647E-01 , 0.833905E-01 , 0.847358E-01 , 0.861028E-01 , 0.874882E-01 ,
0.888957E-01 , 0.903243E-01 , 0.917736E-01 , 0.932464E-01 , 0.947407E-01 ,
0.962571E-01 , 0.977955E-01 , 0.993584E-01 , 0.100942E+00 , 0.102551E+00 ,
0.104186E+00 , 0.105842E+00 , 0.107524E+00 , 0.109231E+00 , 0.110963E+00 ,
0.112722E+00 , 0.114506E+00 , 0.116317E+00 , 0.118153E+00 , 0.120019E+00 ,
0.121911E+00 , 0.123831E+00 , 0.125778E+00 , 0.127755E+00 , 0.129761E+00 ,
0.131796E+00 , 0.133863E+00 , 0.135956E+00 , 0.138082E+00 , 0.140241E+00 ,
0.142428E+00 , 0.144649E+00 , 0.146902E+00 , 0.149190E+00 , 0.151506E+00 ,
0.153859E+00 , 0.156245E+00 , 0.158669E+00 , 0.161126E+00 , 0.163618E+00 ,
0.166145E+00 , 0.168711E+00 , 0.171313E+00 , 0.173951E+00 , 0.176626E+00 ,
0.179342E+00 , 0.182096E+00 , 0.184893E+00 , 0.187724E+00 , 0.190600E+00 ,
0.193518E+00 , 0.196473E+00 , 0.199474E+00 , 0.202516E+00 , 0.205604E+00 ,
0.208730E+00 , 0.211905E+00 , 0.215127E+00 , 0.218389E+00 , 0.221701E+00 ,
0.225063E+00 , 0.228466E+00 , 0.231920E+00 , 0.235421E+00 , 0.238976E+00 ,
0.242580E+00 , 0.246232E+00 , 0.249933E+00 , 0.253691E+00 , 0.257499E+00 ,
0.261359E+00 , 0.265278E+00 , 0.269249E+00 , 0.273274E+00 , 0.277358E+00 ,
0.281498E+00 , 0.285694E+00 , 0.289952E+00 , 0.294268E+00 , 0.298641E+00 ,
0.303078E+00 , 0.307577E+00 , 0.312135E+00 , 0.316753E+00 , 0.321440E+00 ,
0.326196E+00 , 0.331009E+00 , 0.335893E+00 , 0.340842E+00 , 0.345863E+00 ,
0.350951E+00 , 0.356106E+00 , 0.361337E+00 , 0.366636E+00 , 0.372006E+00 ,
0.377447E+00 , 0.382966E+00 , 0.388567E+00 , 0.394233E+00 , 0.399981E+00 ,
0.405806E+00 , 0.411714E+00 , 0.417699E+00 , 0.423772E+00 , 0.429914E+00 ,
0.436145E+00 , 0.442468E+00 , 0.448862E+00 , 0.455359E+00 , 0.461930E+00 ,
0.468596E+00 , 0.475348E+00 , 0.482186E+00 , 0.489124E+00 , 0.496160E+00 ,
0.503278E+00 , 0.510497E+00 , 0.517808E+00 , 0.525224E+00 , 0.532737E+00 ,
0.540355E+00 , 0.548059E+00 , 0.555886E+00 , 0.563797E+00 , 0.571825E+00 ,
0.579952E+00 , 0.588198E+00 , 0.596545E+00 , 0.605000E+00 , 0.613572E+00 ,
0.622255E+00 , 0.631059E+00 , 0.639962E+00 , 0.649003E+00 , 0.658144E+00 ,
0.667414E+00 , 0.676815E+00 , 0.686317E+00 , 0.695956E+00 , 0.705728E+00 ,
0.715622E+00 , 0.725641E+00 , 0.735799E+00 , 0.746082E+00 , 0.756495E+00 ,
0.767052E+00 , 0.777741E+00 , 0.788576E+00 , 0.799549E+00 , 0.810656E+00 ,
0.821914E+00 , 0.833314E+00 , 0.844854E+00 , 0.856555E+00 , 0.868415E+00 ,
0.880404E+00 , 0.892575E+00 , 0.904877E+00 , 0.917350E+00 , 0.929974E+00 ,
0.942771E+00 , 0.955724E+00 , 0.968837E+00 , 0.982127E+00 , 0.995600E+00 ,
0.100921E+01 , 0.102304E+01 , 0.103700E+01 , 0.105116E+01 , 0.106549E+01 ,
0.108002E+01 , 0.109471E+01 , 0.110962E+01 , 0.112469E+01 , 0.113995E+01 ,
0.115542E+01 , 0.117107E+01 , 0.118693E+01 , 0.120298E+01 , 0.121923E+01 ,
0.123569E+01 , 0.125234E+01 , 0.126923E+01 , 0.128631E+01 , 0.130362E+01 ,
0.132114E+01 , 0.133887E+01 , 0.135683E+01 , 0.137500E+01 , 0.139342E+01 ,
0.141205E+01 , 0.143091E+01 , 0.145000E+01 , 0.146933E+01 , 0.148892E+01 ,
0.150874E+01 , 0.152881E+01 , 0.154912E+01 , 0.156970E+01 , 0.159049E+01 ,
0.161159E+01 , 0.163293E+01 , 0.165452E+01 , 0.167640E+01 , 0.169852E+01 ,
0.172091E+01 , 0.174359E+01 , 0.176653E+01 , 0.178977E+01 , 0.181332E+01 ,
0.183709E+01 , 0.186119E+01 , 0.188559E+01 , 0.191028E+01 , 0.193524E+01 ,
0.196054E+01 , 0.198616E+01 , 0.201208E+01 , 0.203829E+01 , 0.206485E+01 ,
0.209170E+01 , 0.211885E+01 , 0.214637E+01 , 0.217424E+01 , 0.220242E+01 ,
0.223092E+01 , 0.225979E+01 , 0.228899E+01 , 0.231855E+01 , 0.234845E+01 ,
0.237874E+01 , 0.240937E+01 , 0.244040E+01 , 0.247176E+01 , 0.250349E+01 ,
0.253560E+01 , 0.256814E+01 , 0.260099E+01 , 0.263431E+01 , 0.266800E+01 ,
0.270207E+01 , 0.273656E+01 , 0.277145E+01 , 0.280671E+01 , 0.284248E+01 ,
0.287859E+01 , 0.291516E+01 , 0.295219E+01 , 0.298962E+01 , 0.302746E+01 ,
0.306579E+01 , 0.310454E+01 , 0.314377E+01 , 0.318351E+01 , 0.322360E+01 ,
0.326427E+01 , 0.330538E+01 , 0.334694E+01 , 0.338894E+01 , 0.343155E+01 ,
0.347456E+01 , 0.351809E+01 , 0.356216E+01 , 0.360673E+01 , 0.365184E+01 ,
0.369744E+01 , 0.374352E+01 , 0.379018E+01 , 0.383743E+01 , 0.388518E+01 ,
0.393344E+01 , 0.398230E+01 , 0.403177E+01 , 0.408175E+01 , 0.413229E+01 ,
0.418343E+01 , 0.423514E+01 , 0.428746E+01 , 0.434034E+01 , 0.439389E+01 ,
0.444808E+01 , 0.450276E+01 , 0.455820E+01 , 0.461423E+01 , 0.467084E+01 ,
0.472816E+01 , 0.478607E+01 , 0.484468E+01 , 0.490393E+01 , 0.496389E+01 ,
0.502446E+01 , 0.508580E+01 , 0.514776E+01 , 0.521047E+01 , 0.527385E+01 ,
0.533798E+01 , 0.540279E+01 , 0.546838E+01 , 0.553466E+01 , 0.560173E+01 ,
0.566949E+01 , 0.573807E+01 , 0.580750E+01 , 0.587749E+01 , 0.594846E+01 ,
0.602017E+01 , 0.609260E+01 , 0.616591E+01 , 0.623995E+01 , 0.631490E+01 ,
0.639061E+01 , 0.646723E+01 , 0.654477E+01 , 0.662293E+01 , 0.670220E+01 ,
0.678227E+01 , 0.686313E+01 , 0.694495E+01 , 0.702777E+01 , 0.711142E+01 ,
0.719592E+01 , 0.728140E+01 , 0.736790E+01 , 0.745527E+01 , 0.754352E+01 ,
0.763298E+01 , 0.772316E+01 , 0.781442E+01 , 0.790676E+01 , 0.800001E+01 ,
0.809435E+01 , 0.818967E+01 , 0.828606E+01 , 0.838343E+01 , 0.848194E+01 ,
0.858144E+01 , 0.868207E+01 , 0.878392E+01 , 0.888673E+01 , 0.899060E+01 ,
0.909567E+01 , 0.920172E+01 , 0.930909E+01 , 0.941765E+01 , 0.952730E+01 ,
0.963821E+01 , 0.975022E+01 , 0.986352E+01 , 0.997793E+01 , 0.100937E+02 ,
0.102105E+02 , 0.103287E+02 , 0.104481E+02 , 0.105688E+02 , 0.106909E+02 ,
0.108143E+02 , 0.109387E+02 , 0.110647E+02 , 0.111921E+02 , 0.113207E+02 ,
0.114508E+02 , 0.115821E+02 , 0.117149E+02 , 0.118490E+02 , 0.119847E+02 ,
0.121216E+02 , 0.122601E+02 , 0.124002E+02 , 0.125416E+02 , 0.126846E+02 ,
0.128290E+02 , 0.129747E+02 , 0.131224E+02 , 0.132712E+02 , 0.134220E+02 ,
0.135742E+02 , 0.137278E+02 , 0.138831E+02 , 0.140403E+02 , 0.141989E+02 ,
0.143589E+02 , 0.145211E+02 , 0.146845E+02 , 0.148501E+02 , 0.150172E+02 ,
0.151858E+02 , 0.153564E+02 , 0.155288E+02 , 0.157029E+02 , 0.158786E+02 ,
0.160562E+02 , 0.162358E+02 , 0.164174E+02 , 0.166004E+02 , 0.167858E+02 ,
0.169728E+02 , 0.171620E+02 , 0.173528E+02 , 0.175455E+02 , 0.177406E+02 ,
0.179372E+02 , 0.181363E+02 , 0.183372E+02 , 0.185400E+02 , 0.187453E+02 ,
0.189523E+02 , 0.191613E+02 , 0.193728E+02 , 0.195866E+02 , 0.198024E+02 ,
0.200200E+02 , 0.202401E+02 , 0.204626E+02 , 0.206871E+02 , 0.209140E+02 ,
0.211430E+02 , 0.213744E+02 , 0.216085E+02 , 0.218446E+02 , 0.220828E+02 ,
0.223241E+02 , 0.225671E+02 , 0.228132E+02 , 0.230615E+02 , 0.233120E+02 ,
0.235651E+02 , 0.238211E+02 , 0.240794E+02 , 0.243404E+02 , 0.246042E+02 ,
0.248704E+02 , 0.251390E+02 , 0.254109E+02 , 0.256847E+02 , 0.259620E+02 ,
0.262418E+02 , 0.265240E+02 , 0.268092E+02 , 0.270975E+02 , 0.273883E+02 ,
0.276822E+02 , 0.279792E+02 , 0.282789E+02 , 0.285812E+02 , 0.288867E+02 ,
0.291954E+02 , 0.295075E+02 , 0.298222E+02 , 0.301398E+02 , 0.304606E+02 ,
0.307848E+02 , 0.311119E+02 , 0.314424E+02 , 0.317763E+02 , 0.321133E+02 ,
0.324536E+02 , 0.327971E+02 , 0.331440E+02 , 0.334940E+02 , 0.338475E+02 ,
0.342050E+02 , 0.345654E+02 , 0.349295E+02 , 0.352975E+02 , 0.356687E+02 ,
0.360430E+02 , 0.364221E+02 , 0.368042E+02 , 0.371896E+02 , 0.375790E+02 ,
0.379725E+02 , 0.383692E+02 , 0.387702E+02 , 0.391744E+02 , 0.395839E+02 ,
0.399958E+02 , 0.404118E+02 , 0.408325E+02 , 0.412574E+02 , 0.416858E+02 ,
0.421188E+02 , 0.425551E+02 , 0.429962E+02 , 0.434407E+02 , 0.438910E+02 ,
0.443439E+02 , 0.448024E+02 , 0.452648E+02 , 0.457308E+02 , 0.462018E+02 ,
0.466775E+02 , 0.471582E+02 , 0.476428E+02 , 0.481313E+02 , 0.486249E+02 ,
0.491235E+02 , 0.496272E+02 , 0.501349E+02 , 0.506479E+02 , 0.511652E+02 ,
0.516876E+02 , 0.522142E+02 , 0.527474E+02 , 0.532836E+02 , 0.538266E+02 ,
0.543737E+02 , 0.549254E+02 , 0.554839E+02 , 0.560456E+02 , 0.566142E+02 ,
0.571872E+02 , 0.577662E+02 , 0.583498E+02 , 0.589392E+02 , 0.595347E+02 ,
0.601346E+02 , 0.607410E+02 , 0.613519E+02 , 0.619689E+02 , 0.625922E+02 ,
0.632204E+02 , 0.638550E+02 , 0.644959E+02 , 0.651418E+02 , 0.657942E+02 ,
0.664516E+02 , 0.671158E+02 , 0.677864E+02 , 0.684624E+02 , 0.691451E+02 ,
0.698345E+02 , 0.705293E+02 , 0.712312E+02 , 0.719398E+02 , 0.726542E+02 ,
0.733754E+02 , 0.741022E+02 , 0.748363E+02 , 0.755777E+02 , 0.763247E+02 ,
0.770791E+02 , 0.778394E+02 , 0.786088E+02 , 0.793824E+02 , 0.801653E+02 ,
0.809542E+02 , 0.817509E+02 , 0.825536E+02 , 0.833643E+02 , 0.841828E+02 ,
0.850076E+02 , 0.858405E+02 , 0.866797E+02 , 0.875289E+02 , 0.883827E+02 ,
0.892467E+02 , 0.901172E+02 , 0.909962E+02 , 0.918818E+02 , 0.927760E+02 ,
0.936790E+02 , 0.945887E+02 , 0.955071E+02 , 0.964346E+02 , 0.973689E+02 ,
0.983123E+02 , 0.992648E+02 , 0.100224E+03 , 0.101193E+03 , 0.102169E+03 ,
0.103155E+03 , 0.104150E+03 , 0.105152E+03 , 0.106164E+03 , 0.107186E+03 ,
0.108217E+03 , 0.109256E+03 , 0.110303E+03 , 0.111362E+03 , 0.112429E+03 ,
0.113503E+03 , 0.114588E+03 , 0.115684E+03 , 0.116789E+03 , 0.117903E+03 ,
0.119028E+03 , 0.120160E+03 , 0.121306E+03 , 0.122460E+03 , 0.123623E+03 ,
0.124796E+03 , 0.125981E+03 , 0.127174E+03 , 0.128381E+03 , 0.129594E+03 ,
0.130822E+03 , 0.132058E+03 , 0.133306E+03 , 0.134563E+03 , 0.135828E+03 ,
0.137109E+03 , 0.138402E+03 , 0.139700E+03 , 0.141017E+03 , 0.142338E+03 ,
0.143676E+03 , 0.145025E+03 , 0.146382E+03 , 0.147753E+03 , 0.149133E+03 ,
0.150529E+03 , 0.151935E+03 , 0.153351E+03 , 0.154783E+03 , 0.156222E+03 ,
0.157678E+03 , 0.159148E+03 , 0.160624E+03 , 0.162117E+03 , 0.163621E+03 ,
0.165142E+03 , 0.166674E+03 , 0.168212E+03 , 0.169772E+03 , 0.171340E+03 ,
0.172921E+03 , 0.174522E+03 , 0.176129E+03 , 0.177755E+03 , 0.179388E+03 ,
0.181040E+03 , 0.182707E+03 , 0.184382E+03 , 0.186076E+03 , 0.187782E+03 ,
0.189503E+03 , 0.191240E+03 , 0.192989E+03 , 0.194758E+03 , 0.196535E+03 ,
0.198332E+03 , 0.200141E+03 , 0.201963E+03 , 0.203805E+03 , 0.205656E+03 ,
0.207532E+03 , 0.209416E+03 , 0.211317E+03 , 0.213236E+03 , 0.215167E+03 ,
0.217121E+03 , 0.219087E+03 , 0.221067E+03 , 0.223064E+03 , 0.225080E+03 ,
0.227113E+03 , 0.229160E+03 , 0.231221E+03 , 0.233305E+03 , 0.235403E+03 ,
0.237520E+03 , 0.239655E+03 , 0.241805E+03 , 0.243979E+03 , 0.246163E+03 ,
0.248365E+03 , 0.250593E+03 , 0.252830E+03 , 0.255093E+03 , 0.257364E+03 ,
0.259667E+03 , 0.261979E+03 , 0.264312E+03 , 0.266666E+03 , 0.269034E+03 ,
0.271430E+03 , 0.273841E+03 , 0.276268E+03 , 0.278722E+03 , 0.281185E+03 ,
0.283677E+03 , 0.286190E+03 , 0.288714E+03 , 0.291266E+03 , 0.293834E+03 ,
0.296431E+03 , 0.299045E+03 , 0.301676E+03 , 0.304329E+03 , 0.307006E+03 ,
0.309706E+03 , 0.312423E+03 , 0.315165E+03 , 0.317930E+03 , 0.320705E+03 ,
0.323519E+03 , 0.326350E+03 , 0.329199E+03 , 0.332073E+03 , 0.334973E+03 ,
0.337897E+03 , 0.340839E+03 , 0.343800E+03 , 0.346794E+03 , 0.349806E+03 ,
0.352845E+03 , 0.355918E+03 , 0.358994E+03 , 0.362112E+03 , 0.365242E+03 ,
0.368407E+03 , 0.371599E+03 , 0.374802E+03 , 0.378042E+03 , 0.381293E+03 ,
0.384588E+03 , 0.387904E+03 , 0.391239E+03 , 0.394604E+03 , 0.397988E+03 ,
0.401411E+03 , 0.404862E+03 , 0.408326E+03 , 0.411829E+03 , 0.415352E+03 ,
0.418906E+03 , 0.422490E+03 , 0.426095E+03 , 0.429740E+03 , 0.433398E+03 ,
0.437097E+03 , 0.440827E+03 , 0.444570E+03 , 0.448354E+03 , 0.452160E+03 ,
0.455999E+03 , 0.459870E+03 , 0.463765E+03 , 0.467702E+03 , 0.471652E+03 ,
0.475646E+03 , 0.479674E+03 , 0.483715E+03 , 0.487811E+03 , 0.491911E+03 ,
0.496065E+03 , 0.500244E+03 , 0.504448E+03 , 0.508698E+03 , 0.512961E+03 ,
0.517282E+03 , 0.521617E+03 , 0.525989E+03 , 0.530397E+03 , 0.534831E+03 ,
0.539313E+03 , 0.543821E+03 , 0.548355E+03 , 0.552938E+03 , 0.557549E+03 ,
0.562197E+03 , 0.566884E+03 , 0.571598E+03 , 0.576351E+03 , 0.581131E+03 ,
0.585963E+03 , 0.590835E+03 , 0.595722E+03 , 0.600663E+03 , 0.605631E+03 ,
0.610641E+03 , 0.615151E+03 , 0.619625E+03 , 0.624140E+03 , 0.628671E+03 ,
0.633243E+03 , 0.637845E+03 , 0.642465E+03 , 0.647126E+03 , 0.651806E+03 ,
0.656527E+03 , 0.661279E+03 , 0.666049E+03 , 0.670861E+03 , 0.675692E+03 ,
0.680566E+03 , 0.685471E+03 , 0.690396E+03 , 0.695363E+03 , 0.700350E+03 ,
0.705381E+03 , 0.710444E+03 , 0.715527E+03 , 0.720654E+03 , 0.725801E+03 ,
0.730994E+03 , 0.736219E+03 , 0.741465E+03 , 0.746756E+03 , 0.752068E+03 ,
0.757426E+03 , 0.762819E+03 , 0.768231E+03 , 0.773692E+03 , 0.779172E+03 ,
0.784701E+03 , 0.790265E+03 , 0.795849E+03 , 0.801483E+03 , 0.807137E+03 ,
0.812842E+03 , 0.818582E+03 , 0.824343E+03 , 0.830153E+03 , 0.835987E+03 ,
0.841871E+03 , 0.847791E+03 , 0.853733E+03 , 0.859727E+03 , 0.865743E+03 ,
0.871812E+03 , 0.877918E+03 , 0.884046E+03 , 0.890228E+03 , 0.896433E+03 ,
0.902690E+03 , 0.908987E+03 , 0.915307E+03 , 0.921681E+03 , 0.928078E+03 ,
0.934531E+03 , 0.941023E+03 , 0.947539E+03 , 0.954112E+03 , 0.960708E+03 ,
0.967361E+03 , 0.974053E+03 , 0.980771E+03 , 0.987545E+03 , 0.994345E+03 ,
0.100120E+04 , 0.100810E+04 , 0.101502E+04 , 0.102201E+04 , 0.102902E+04 ,
0.103608E+04 , 0.104320E+04 , 0.105033E+04 , 0.105753E+04 , 0.106475E+04 ,
0.107204E+04 , 0.107936E+04 , 0.108672E+04 , 0.109414E+04 , 0.110158E+04 ,
0.110908E+04 , 0.111663E+04 , 0.112421E+04 , 0.113185E+04 , 0.113952E+04 ,
0.114725E+04 , 0.115503E+04 , 0.116284E+04 , 0.117071E+04 , 0.117861E+04 ,
0.118658E+04 , 0.119459E+04 , 0.120264E+04 , 0.121074E+04 , 0.121888E+04 ,
0.122709E+04 , 0.123534E+04 , 0.124362E+04 , 0.125198E+04 , 0.126036E+04 ,
0.126881E+04 , 0.127731E+04 , 0.128584E+04 , 0.129444E+04 , 0.130307E+04 ,
0.131177E+04 , 0.132053E+04 , 0.132931E+04 , 0.133817E+04 , 0.134705E+04 ,
0.135602E+04 , 0.136503E+04 , 0.137407E+04 , 0.138319E+04 , 0.139234E+04 ,
0.140156E+04 , 0.141084E+04 , 0.142015E+04 , 0.142954E+04 , 0.143896E+04 ,
0.144845E+04 , 0.145800E+04 , 0.146759E+04 , 0.147725E+04 , 0.148694E+04 ,
0.149672E+04 , 0.150655E+04 , 0.151641E+04 , 0.152635E+04 , 0.153633E+04 ,
0.154639E+04 , 0.155650E+04 , 0.156665E+04 , 0.157688E+04 , 0.158715E+04 ,
0.159750E+04 , 0.160791E+04 , 0.161836E+04 , 0.162888E+04 , 0.163945E+04 ,
0.165010E+04 , 0.166081E+04 , 0.167155E+04 , 0.168238E+04 , 0.169325E+04 ,
0.170420E+04 , 0.171522E+04 , 0.172627E+04 , 0.173741E+04 , 0.174859E+04 ,
0.175986E+04 , 0.177119E+04 , 0.178256E+04 , 0.179402E+04 , 0.180552E+04 ,
0.181711E+04 , 0.182877E+04 , 0.184046E+04 , 0.185224E+04 , 0.186407E+04 ,
0.187599E+04 , 0.188797E+04 , 0.190000E+04 , 0.191212E+04 , 0.192428E+04 ,
0.193653E+04 , 0.194886E+04 , 0.196122E+04 , 0.197368E+04 , 0.198618E+04 ,
0.199878E+04 , 0.201145E+04 , 0.202416E+04 , 0.203698E+04 , 0.204983E+04 ,
0.206278E+04 , 0.207580E+04 , 0.208887E+04 , 0.210204E+04 , 0.211525E+04 ,
0.212856E+04 , 0.214195E+04 , 0.215538E+04 , 0.216892E+04 , 0.218249E+04 ,
0.219618E+04 , 0.220994E+04 , 0.222375E+04 , 0.223766E+04 , 0.225161E+04 ,
0.226567E+04 , 0.227981E+04 , 0.229399E+04 , 0.230829E+04 , 0.232263E+04 ,
0.233708E+04 , 0.235161E+04 , 0.236618E+04 , 0.238087E+04 , 0.239560E+04 ,
0.241044E+04 , 0.242538E+04 , 0.244035E+04 , 0.245544E+04 , 0.247057E+04 ,
0.248583E+04 , 0.250116E+04 , 0.251654E+04 , 0.253204E+04 , 0.254759E+04 ,
0.256325E+04 , 0.257901E+04 , 0.259480E+04 , 0.261073E+04 , 0.262670E+04 ,
0.264279E+04 , 0.265896E+04 , 0.267519E+04 , 0.269154E+04 , 0.270794E+04 ,
0.272447E+04 , 0.274108E+04 , 0.275774E+04 , 0.277453E+04 , 0.279137E+04 ,
0.280834E+04 , 0.282540E+04 , 0.284251E+04 , 0.285975E+04 , 0.287704E+04 ,
0.289446E+04 , 0.291198E+04 , 0.292954E+04 , 0.294725E+04 , 0.296499E+04 ,
0.298288E+04 , 0.300087E+04 , 0.301890E+04 , 0.303707E+04 , 0.305529E+04 ,
0.307365E+04 , 0.309211E+04 , 0.311062E+04 , 0.312927E+04 , 0.314798E+04 ,
0.316682E+04 , 0.318577E+04 , 0.320477E+04 , 0.322391E+04 , 0.324310E+04 ,
0.326245E+04 , 0.328189E+04 , 0.330138E+04 , 0.332103E+04 , 0.334073E+04 ,
0.336058E+04 , 0.338053E+04 , 0.340054E+04 , 0.342069E+04 , 0.344090E+04 ,
0.346127E+04 , 0.348174E+04 , 0.350227E+04 , 0.352295E+04 , 0.354369E+04 ,
0.356458E+04 , 0.358559E+04 , 0.360664E+04 , 0.362787E+04 , 0.364914E+04 ,
0.367058E+04 , 0.369212E+04 , 0.371373E+04 , 0.373548E+04 , 0.375731E+04 ,
0.377929E+04 , 0.380139E+04 , 0.382355E+04 , 0.384588E+04 , 0.386826E+04 ,
0.389081E+04 , 0.391348E+04 , 0.393620E+04 , 0.395910E+04 , 0.398205E+04 ,
0.400518E+04 , 0.402843E+04 , 0.405173E+04 , 0.407520E+04 , 0.409875E+04 ,
0.412246E+04 , 0.414630E+04 , 0.417019E+04 , 0.419427E+04 , 0.421840E+04 ,
0.424272E+04 , 0.426715E+04 , 0.429165E+04 , 0.431634E+04 , 0.434108E+04 ,
0.436602E+04 , 0.439107E+04 , 0.441618E+04 , 0.444149E+04 , 0.446685E+04 ,
0.449241E+04 , 0.451810E+04 , 0.454385E+04 , 0.456977E+04 , 0.459578E+04 ,
0.462197E+04 , 0.464830E+04 , 0.467468E+04 , 0.470127E+04 , 0.472792E+04 ,
0.475477E+04 , 0.478175E+04 , 0.480880E+04 , 0.483605E+04 , 0.486336E+04 ,
0.489087E+04 , 0.491853E+04 , 0.494623E+04 , 0.497415E+04 , 0.500215E+04 ,
0.503034E+04 , 0.505867E+04 , 0.508707E+04 , 0.511568E+04 , 0.514436E+04 ,
0.517325E+04 , 0.520227E+04 , 0.523137E+04 , 0.526068E+04 , 0.529005E+04 ,
0.531965E+04 , 0.534939E+04 , 0.537921E+04 , 0.540923E+04 , 0.543932E+04 ,
0.546965E+04 , 0.550011E+04 , 0.553064E+04 , 0.556139E+04 , 0.559223E+04 ,
0.562329E+04 , 0.565449E+04 , 0.568577E+04 , 0.571727E+04 , 0.574884E+04 ,
0.578064E+04 , 0.581261E+04 , 0.584464E+04 , 0.587692E+04 , 0.590924E+04 ,
0.594182E+04 , 0.597455E+04 , 0.600736E+04 , 0.604039E+04 , 0.607350E+04 ,
0.610685E+04 , 0.614036E+04 , 0.617394E+04 , 0.620777E+04 , 0.624169E+04 ,
0.627584E+04 , 0.631014E+04 , 0.634454E+04 , 0.637918E+04 , 0.641390E+04 ,
0.644887E+04 , 0.648400E+04 , 0.651919E+04 , 0.655467E+04 , 0.659021E+04 ,
0.662599E+04 , 0.666197E+04 , 0.669800E+04 , 0.673429E+04 , 0.677069E+04 ,
0.680735E+04 , 0.684415E+04 , 0.688104E+04 , 0.691819E+04 , 0.695543E+04 ,
0.699292E+04 , 0.703061E+04 , 0.706837E+04 , 0.710639E+04 , 0.714451E+04 ,
0.718289E+04 , 0.722143E+04 , 0.726009E+04 , 0.729903E+04 , 0.733802E+04 ,
0.737729E+04 , 0.741676E+04 , 0.745631E+04 , 0.749612E+04 , 0.753602E+04 ,
0.757622E+04 , 0.761659E+04 , 0.765705E+04 , 0.769780E+04 , 0.773863E+04 ,
0.777975E+04 , 0.782106E+04 , 0.786246E+04 , 0.790412E+04 , 0.794593E+04 ,
0.798802E+04 , 0.803028E+04 , 0.807259E+04 , 0.811525E+04 , 0.815798E+04 ,
0.820102E+04 , 0.824427E+04 , 0.828757E+04 , 0.833120E+04 , 0.837493E+04 ,
0.841895E+04 , 0.846313E+04 , 0.850744E+04 , 0.855208E+04 , 0.859678E+04 ,
0.864179E+04 , 0.868705E+04 , 0.873237E+04 , 0.877800E+04 , 0.882374E+04 ,
0.886979E+04 , 0.891603E+04 , 0.896237E+04 , 0.900904E+04 , 0.905579E+04 ,
0.910288E+04 , 0.915018E+04 , 0.919758E+04 , 0.924529E+04 , 0.929310E+04 ,
0.934122E+04 , 0.938959E+04 , 0.943804E+04 , 0.948687E+04 , 0.953575E+04 ,
0.958494E+04 , 0.963442E+04 , 0.968395E+04 , 0.973384E+04 , 0.978383E+04 ,
0.983412E+04 , 0.988468E+04 , 0.993534E+04 , 0.998630E+04 , 0.100374E+05 ,
0.100888E+05 , 0.101406E+05 , 0.101923E+05 , 0.102444E+05 , 0.102966E+05 ,
0.103492E+05 , 0.104020E+05 , 0.104550E+05 , 0.105082E+05 , 0.105616E+05 ,
0.106153E+05 , 0.106693E+05 , 0.107234E+05 , 0.107779E+05 , 0.108325E+05 ,
0.108874E+05 , 0.109425E+05 , 0.109978E+05 , 0.110535E+05 , 0.111092E+05 ,
0.111653E+05 , 0.112217E+05 , 0.112782E+05 , 0.113350E+05 , 0.113920E+05 ,
0.114493E+05 , 0.115070E+05 , 0.115646E+05 , 0.116228E+05 , 0.116809E+05 ,
0.117396E+05 , 0.117984E+05 , 0.118574E+05 , 0.119167E+05 , 0.119762E+05 ,
0.120360E+05 , 0.120962E+05 , 0.121564E+05 , 0.122170E+05 , 0.122778E+05 ,
0.123389E+05 , 0.124004E+05 , 0.124619E+05 , 0.125238E+05 , 0.125859E+05 ,
0.126484E+05 , 0.127111E+05 , 0.127739E+05 , 0.128372E+05 , 0.129006E+05 ,
0.129644E+05 , 0.130285E+05 , 0.130927E+05 , 0.131573E+05 , 0.132220E+05 ,
0.132872E+05 , 0.133526E+05 , 0.134182E+05 , 0.134842E+05 , 0.135503E+05 ,
0.136168E+05 , 0.136836E+05 , 0.137505E+05 , 0.138180E+05 , 0.138854E+05 ,
0.139534E+05 , 0.140216E+05 , 0.140900E+05 , 0.141588E+05 , 0.142277E+05 ,
0.142971E+05 , 0.143668E+05 , 0.144366E+05 , 0.145069E+05 , 0.145773E+05 ,
0.146481E+05 , 0.147192E+05 , 0.147905E+05 , 0.148622E+05 , 0.149341E+05 ,
0.150064E+05 , 0.150790E+05 , 0.151517E+05 , 0.152250E+05 , 0.152983E+05 ,
0.153721E+05 , 0.154462E+05 , 0.155205E+05 , 0.155952E+05 , 0.156701E+05 ,
0.157454E+05 , 0.158211E+05 , 0.158969E+05 , 0.159732E+05 , 0.160496E+05 ,
0.161265E+05 , 0.162037E+05 , 0.162811E+05 , 0.163589E+05 , 0.164369E+05 ,
0.165154E+05 , 0.165942E+05 , 0.166732E+05 , 0.167526E+05 , 0.168322E+05 ,
0.169123E+05 , 0.169927E+05 , 0.170733E+05 , 0.171543E+05 , 0.172356E+05 ,
0.173173E+05 , 0.173993E+05 , 0.174815E+05 , 0.175643E+05 , 0.176471E+05 ,
0.177305E+05 , 0.178143E+05 , 0.178981E+05 , 0.179826E+05 , 0.180671E+05 ,
0.181522E+05 , 0.182377E+05 , 0.183232E+05 , 0.184093E+05 , 0.184955E+05 ,
0.185823E+05 , 0.186695E+05 , 0.187568E+05 , 0.188447E+05 , 0.189326E+05 ,
0.190212E+05 , 0.191101E+05 , 0.191991E+05 , 0.192887E+05 , 0.193785E+05 ,
0.194688E+05 , 0.195595E+05 , 0.196503E+05 , 0.197417E+05 , 0.198332E+05 ,
0.199253E+05 , 0.200178E+05 , 0.201105E+05 , 0.202036E+05 , 0.202971E+05 ,
0.203910E+05 , 0.204853E+05 , 0.205798E+05 , 0.206749E+05 , 0.207701E+05 ,
0.208659E+05 , 0.209621E+05 , 0.210584E+05 , 0.211554E+05 , 0.212524E+05 ,
0.213501E+05 , 0.214482E+05 , 0.215465E+05 , 0.216452E+05 , 0.217442E+05 ,
0.218439E+05 , 0.219439E+05 , 0.220440E+05 , 0.221449E+05 , 0.222457E+05 ,
0.223473E+05 , 0.224494E+05 , 0.225514E+05 , 0.226542E+05 , 0.227571E+05 ,
0.228606E+05 , 0.229646E+05 , 0.230687E+05 , 0.231734E+05 , 0.232783E+05 ,
0.233839E+05 , 0.234898E+05 , 0.235960E+05 , 0.237027E+05 , 0.238097E+05 ,
0.239173E+05 , 0.240254E+05 , 0.241335E+05 , 0.242424E+05 , 0.243514E+05 ,
0.244611E+05 , 0.245712E+05 , 0.246814E+05 , 0.247923E+05 , 0.249034E+05 ,
0.250152E+05 , 0.250152E+05};

}  // namespace lookuptable
}  // namespace ufo

#endif  // UFO_VARIABLETRANSFORMS_LOOKUPTABLE_H_
