// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "fxrun.h"
#include "fldrawtn.h"

Fl_Double_Window *win3=(Fl_Double_Window *)0;

#include <FL/Fl_Pixmap.H>
static const char *idata_run[] = {
"32 32 516 2",
"  \tc None",
". \tc #C9EFF9",
"+ \tc #BFDCE4",
"@ \tc #C7ECF6",
"# \tc #CAEBF4",
"$ \tc #BAE6F3",
"% \tc #97A9AE",
"& \tc #ADE7F3",
"* \tc #B9EFF7",
"= \tc #B8F7FB",
"- \tc #C3EFF7",
"; \tc #B7EDFC",
"> \tc #9AC8D8",
", \tc #A6E1F0",
"\' \tc #9FEFF7",
") \tc #8BEFF7",
"! \tc #85EDF6",
"~ \tc #93EBF5",
"{ \tc #A4ECFA",
"] \tc #8CD4E9",
"^ \tc #8DD2E6",
"/ \tc #9FC2CC",
"( \tc #D0F3FA",
"_ \tc #AEECF5",
": \tc #81E5F2",
"< \tc #70E5F2",
"[ \tc #62E3F1",
"} \tc #5AE1EF",
"| \tc #70E1F1",
"1 \tc #78D8ED",
"2 \tc #76DAF7",
"3 \tc #72AFC2",
"4 \tc #ADDBE8",
"5 \tc #EDFCFE",
"6 \tc #EEFBFE",
"7 \tc #C7F0F7",
"8 \tc #89DFEE",
"9 \tc #59DAEB",
"0 \tc #49D9EB",
"a \tc #3CD6EA",
"b \tc #3AD4E9",
"c \tc #4BD1E7",
"d \tc #5DD6F1",
"e \tc #55C0DD",
"f \tc #6CBFD7",
"g \tc #9BD6E6",
"h \tc #C7EDF8",
"i \tc #F2FEFE",
"j \tc #E7FBFE",
"k \tc #E5FBFE",
"l \tc #DDF8FC",
"m \tc #ADE8F2",
"n \tc #66D4E7",
"o \tc #35CAE2",
"p \tc #2ACBE4",
"q \tc #22C8E3",
"r \tc #1FC6E1",
"s \tc #34C8E3",
"t \tc #3FC2E0",
"u \tc #47C0E2",
"v \tc #5FA0B4",
"w \tc #A1DEEF",
"x \tc #E5F9FC",
"y \tc #E7FBFD",
"z \tc #E0F9FC",
"A \tc #DAF7FC",
"B \tc #D4F7FB",
"C \tc #D4F8FC",
"D \tc #C6F2F9",
"E \tc #95DFEE",
"F \tc #4BC8DE",
"G \tc #1CBEDB",
"H \tc #16BCDC",
"I \tc #11BBDC",
"J \tc #11B8DB",
"K \tc #1EB7D9",
"L \tc #32C2E8",
"M \tc #3CB2D5",
"N \tc #5FB0C9",
"O \tc #95D0DB",
"P \tc #BAE9F6",
"Q \tc #ECFCFE",
"R \tc #DAF8FC",
"S \tc #D5F8FB",
"T \tc #CEF6FB",
"U \tc #C8F4FA",
"V \tc #C2F2F9",
"W \tc #BEF2FA",
"X \tc #B2EEF6",
"Y \tc #79D5E6",
"Z \tc #33BAD6",
"` \tc #0DAED0",
" .\tc #0AAFD5",
"..\tc #06ACD3",
"+.\tc #07ABD3",
"@.\tc #13ADD4",
"#.\tc #1EADD4",
"$.\tc #2FB1D7",
"%.\tc #5895A8",
"&.\tc #8FD3E5",
"*.\tc #D7F6FB",
"=.\tc #E4FBFE",
"-.\tc #CFF5FA",
";.\tc #C0F2F9",
">.\tc #B8F0F8",
",.\tc #B0EEF7",
"\'.\tc #A9EDF5",
").\tc #A9EDF7",
"!.\tc #97E5F0",
"~.\tc #65CDE0",
"{.\tc #23ADCC",
"].\tc #05A2C9",
"^.\tc #03A2CD",
"/.\tc #02A1CC",
"(.\tc #019EC9",
"_.\tc #15A6CD",
":.\tc #25B9E1",
"<.\tc #2FA2C5",
"[.\tc #5FC4E0",
"}.\tc #A1DFF0",
"|.\tc #E8FDFE",
"1.\tc #DCF9FC",
"2.\tc #D5F7FB",
"3.\tc #C8F3FA",
"4.\tc #BFF0F8",
"5.\tc #AFEEF6",
"6.\tc #A7EBF4",
"7.\tc #A1E9F3",
"8.\tc #98E6F1",
"9.\tc #93E5F1",
"0.\tc #8FE5F0",
"a.\tc #83DEEB",
"b.\tc #51C1D6",
"c.\tc #1AA5C4",
"d.\tc #0194BF",
"e.\tc #0095C2",
"f.\tc #3DBFDA",
"g.\tc #4CC5D9",
"h.\tc #0291BF",
"i.\tc #0C9BC8",
"j.\tc #7FC3D6",
"k.\tc #D4F9FD",
"l.\tc #DEF8FC",
"m.\tc #D6F7FC",
"n.\tc #D0F6FA",
"o.\tc #C7F2F9",
"p.\tc #B8F0F6",
"q.\tc #B0EEF6",
"r.\tc #A8EBF4",
"s.\tc #9FE8F1",
"t.\tc #93E3EE",
"u.\tc #82DDE8",
"v.\tc #72D5E2",
"w.\tc #6DD4E3",
"x.\tc #6DD7E6",
"y.\tc #73DAE8",
"z.\tc #65D1E1",
"A.\tc #3EB7CD",
"B.\tc #0F95B9",
"C.\tc #0A8DB1",
"D.\tc #1A96B7",
"E.\tc #007FAF",
"F.\tc #1D94BB",
"G.\tc #B4CDF6",
"H.\tc #B7CFF7",
"I.\tc #AEC9F6",
"J.\tc #A9C5F5",
"K.\tc #A3C1F5",
"L.\tc #9DBEF4",
"M.\tc #95B9F3",
"N.\tc #8FB4F2",
"O.\tc #87B0F2",
"P.\tc #81ACF1",
"Q.\tc #7AA7F0",
"R.\tc #73A2EF",
"S.\tc #6E9FED",
"T.\tc #689AE9",
"U.\tc #6497E6",
"V.\tc #6092E3",
"W.\tc #5C8FE0",
"X.\tc #5A8DDE",
"Y.\tc #5B8EE0",
"Z.\tc #346CBC",
"`.\tc #4BC1D0",
" +\tc #54CADB",
".+\tc #57CDDE",
"++\tc #59D0E0",
"@+\tc #52C8D9",
"#+\tc #2DA8C1",
"$+\tc #0885AA",
"%+\tc #0078A5",
"&+\tc #3A90AA",
"*+\tc #AECBF6",
"=+\tc #A4D3FA",
"-+\tc #9CD0FA",
";+\tc #96CBF9",
">+\tc #8EC7F7",
",+\tc #87C2F7",
"\'+\tc #7EBCF6",
")+\tc #75B7F5",
"!+\tc #6CB1F4",
"~+\tc #61A9F3",
"{+\tc #58A2ED",
"]+\tc #529CE8",
"^+\tc #4B95E2",
"/+\tc #448EDC",
"(+\tc #3D86D6",
"_+\tc #3881D2",
":+\tc #3179CC",
"<+\tc #2D74C7",
"[+\tc #EDF5FD",
"}+\tc #7EAFF1",
"|+\tc #1758AB",
"1+\tc #34A3B1",
"2+\tc #48BCCC",
"3+\tc #4CC4D7",
"4+\tc #4BC5D8",
"5+\tc #4AC5D7",
"6+\tc #4FCADA",
"7+\tc #34AFC6",
"8+\tc #1E8FB5",
"9+\tc #A8C7F6",
"0+\tc #96CEFA",
"a+\tc #8EC9F9",
"b+\tc #87C5F8",
"c+\tc #7FC0F7",
"d+\tc #77BAF6",
"e+\tc #6DB4F5",
"f+\tc #63ADF4",
"g+\tc #5AA7F0",
"h+\tc #529FEA",
"i+\tc #4B98E4",
"j+\tc #4591DE",
"k+\tc #3F8BD9",
"l+\tc #3783D3",
"m+\tc #327DCE",
"n+\tc #2C76C8",
"o+\tc #2771C4",
"p+\tc #7CADF0",
"q+\tc #5189D5",
"r+\tc #1558AB",
"s+\tc #1E808C",
"t+\tc #39ACBB",
"u+\tc #45BCCD",
"v+\tc #45BFD1",
"w+\tc #42BED0",
"x+\tc #41BDCE",
"y+\tc #2CABC3",
"z+\tc #4E95AA",
"A+\tc #A4C2F5",
"B+\tc #A7C7F5",
"C+\tc #A1C4F4",
"D+\tc #9CC0F3",
"E+\tc #95BBF2",
"F+\tc #8BB5F1",
"G+\tc #82AFEF",
"H+\tc #77A8EE",
"I+\tc #6EA2EC",
"J+\tc #679BE6",
"K+\tc #5F95DF",
"L+\tc #558CD7",
"M+\tc #4F86D2",
"N+\tc #4880CC",
"O+\tc #4078C5",
"P+\tc #3972BE",
"Q+\tc #316BB8",
"R+\tc #2C65B3",
"S+\tc #255FAD",
"T+\tc #205BA9",
"U+\tc #154F9D",
"V+\tc #136B75",
"W+\tc #2E9EAD",
"X+\tc #3BB4C4",
"Y+\tc #3CB9CB",
"Z+\tc #38B6C9",
"`+\tc #2692AD",
" @\tc #C1D8FD",
".@\tc #F4F9FF",
"+@\tc #F1F7FF",
"@@\tc #EEF5FE",
"#@\tc #EAF3FE",
"$@\tc #E7F1FE",
"%@\tc #E4F0FE",
"&@\tc #E0EDFE",
"*@\tc #DBEBFD",
"=@\tc #D5E7FD",
"-@\tc #CFE3FD",
";@\tc #CCE1FC",
">@\tc #C5DEFC",
",@\tc #BFDAFB",
"\'@\tc #B9D6FB",
")@\tc #AED0FA",
"!@\tc #A6CBF9",
"~@\tc #A1C8F9",
"{@\tc #9AC3F7",
"]@\tc #98C3F8",
"^@\tc #588BDD",
"/@\tc #0F626C",
"(@\tc #2694A3",
"_@\tc #33ACBD",
":@\tc #33B0C3",
"<@\tc #32B0C0",
"[@\tc #1D9AB6",
"}@\tc #3D8D9D",
"|@\tc #BCD5FD",
"1@\tc #F3F8FF",
"2@\tc #F0F6FE",
"3@\tc #ECF4FE",
"4@\tc #EAF2FE",
"5@\tc #E6F0FE",
"6@\tc #E1EEFE",
"7@\tc #DDEBFD",
"8@\tc #D7E8FD",
"9@\tc #D2E5FD",
"0@\tc #C8E0FC",
"a@\tc #C2DCFB",
"b@\tc #B3D3FA",
"c@\tc #A5CAF8",
"d@\tc #9FC6F8",
"e@\tc #9DC5F7",
"f@\tc #97C2F7",
"g@\tc #91BEF6",
"h@\tc #5689DB",
"i@\tc #0E6069",
"j@\tc #218E9D",
"k@\tc #2CA4B5",
"l@\tc #2CA8BA",
"m@\tc #26A2B7",
"n@\tc #1D90AD",
"o@\tc #B8D2FC",
"p@\tc #EBF3FE",
"q@\tc #E8F1FE",
"r@\tc #DBEAFD",
"s@\tc #D4E6FD",
"t@\tc #CBE1FC",
"u@\tc #C4DDFB",
"v@\tc #AACDF9",
"w@\tc #9FC6F7",
"x@\tc #99C3F6",
"y@\tc #95C0F6",
"z@\tc #91BDF6",
"A@\tc #8DBBF5",
"B@\tc #5286D7",
"C@\tc #0C5C65",
"D@\tc #1B8897",
"E@\tc #249BAD",
"F@\tc #249EB0",
"G@\tc #1A97B1",
"H@\tc #3F90A6",
"I@\tc #B2CFFC",
"J@\tc #EDF4FE",
"K@\tc #E7F0FE",
"L@\tc #E3EFFD",
"M@\tc #DEECFD",
"N@\tc #DAE9FD",
"O@\tc #CEE2FC",
"P@\tc #C5DDFB",
"Q@\tc #A9CDF8",
"R@\tc #9EC5F7",
"S@\tc #9CC4F7",
"T@\tc #9BC3F7",
"U@\tc #92BEF5",
"V@\tc #8CBAF5",
"W@\tc #86B6F4",
"X@\tc #4E83D4",
"Y@\tc #0A5761",
"Z@\tc #177F90",
"`@\tc #1C91A3",
" #\tc #1D96A8",
".#\tc #1A88A7",
"+#\tc #AFCDFC",
"@#\tc #E9F2FE",
"##\tc #E0EDFD",
"$#\tc #DBE9FD",
"%#\tc #D1E4FC",
"&#\tc #AFCFF9",
"*#\tc #9DC4F7",
"=#\tc #98C2F6",
"-#\tc #95C0F5",
";#\tc #91BDF5",
">#\tc #8BB9F4",
",#\tc #85B5F3",
"\'#\tc #7EB1F2",
")#\tc #4B80D1",
"!#\tc #08525D",
"~#\tc #127789",
"{#\tc #168798",
"]#\tc #0F86A1",
"^#\tc #3C8FA5",
"/#\tc #AACAFC",
"(#\tc #E2EEFD",
"_#\tc #D8E9FD",
":#\tc #D3E5FC",
"<#\tc #CFE3FC",
"[#\tc #C0DAFB",
"}#\tc #A3C8F7",
"|#\tc #9EC5F6",
"1#\tc #9DC4F6",
"2#\tc #99C2F6",
"3#\tc #97C1F5",
"4#\tc #8AB8F4",
"5#\tc #84B4F3",
"6#\tc #76ABF1",
"7#\tc #467CCD",
"8#\tc #07535E",
"9#\tc #0F7281",
"0#\tc #0F7B90",
"a#\tc #0F85A4",
"b#\tc #A6C7FC",
"c#\tc #E2EEFE",
"d#\tc #D6E6FC",
"e#\tc #CCE1FB",
"f#\tc #A0C6F6",
"g#\tc #9AC3F6",
"h#\tc #96C0F5",
"i#\tc #92BDF4",
"j#\tc #8AB8F3",
"k#\tc #84B3F2",
"l#\tc #7DB0F1",
"m#\tc #75AAF0",
"n#\tc #6DA4EF",
"o#\tc #4177C8",
"p#\tc #075765",
"q#\tc #0B6A7B",
"r#\tc #09758E",
"s#\tc #3893AD",
"t#\tc #A2C4FC",
"u#\tc #E4EFFE",
"v#\tc #D5E5FC",
"w#\tc #CEE2FB",
"x#\tc #BCD7FA",
"y#\tc #98C0F5",
"z#\tc #93BDF4",
"A#\tc #8EBAF3",
"B#\tc #85B4F2",
"C#\tc #7DAFF1",
"D#\tc #76ABF0",
"E#\tc #6DA4EE",
"F#\tc #659EE8",
"G#\tc #3C72C3",
"H#\tc #044F61",
"I#\tc #076376",
"J#\tc #0D7998",
"K#\tc #9DC1FB",
"L#\tc #DEEBFD",
"M#\tc #D8E7FC",
"N#\tc #D3E4FC",
"O#\tc #BFD9FA",
"P#\tc #A7CAF7",
"Q#\tc #9FC5F6",
"R#\tc #9CC3F5",
"S#\tc #94BDF4",
"T#\tc #8EB9F3",
"U#\tc #7FAFF1",
"V#\tc #74A9EF",
"W#\tc #6BA2ED",
"X#\tc #659DE8",
"Y#\tc #5C96E1",
"Z#\tc #376DBE",
"`#\tc #335F69",
" $\tc #0F5F77",
".$\tc #388DA1",
"+$\tc #9AC0FB",
"@$\tc #D5E6FC",
"#$\tc #CAE0FB",
"$$\tc #BAD5F9",
"%$\tc #AACCF7",
"&$\tc #A6C9F7",
"*$\tc #A4C8F6",
"=$\tc #99C1F5",
"-$\tc #92BCF3",
";$\tc #88B6F2",
">$\tc #80B0F1",
",$\tc #77AAEF",
"\'$\tc #659CE7",
")$\tc #5C95E0",
"!$\tc #548DD9",
"~$\tc #3068B8",
"{$\tc #89B6F9",
"]$\tc #C5DDFA",
"^$\tc #BDD8F9",
"/$\tc #B4D2F9",
"($\tc #AFCFF8",
"_$\tc #ACCDF7",
":$\tc #A9CBF7",
"<$\tc #A4C7F6",
"[$\tc #9EC3F5",
"}$\tc #8DB8F2",
"|$\tc #85B2F1",
"1$\tc #7AABF0",
"2$\tc #6EA3EE",
"3$\tc #5B93DF",
"4$\tc #538CD7",
"5$\tc #4B84D0",
"6$\tc #2B63B3",
"7$\tc #6095E6",
"8$\tc #6095E5",
"9$\tc #5E93E4",
"0$\tc #5C92E3",
"a$\tc #5C91E2",
"b$\tc #5A8FE0",
"c$\tc #598EDF",
"d$\tc #578CDD",
"e$\tc #558ADB",
"f$\tc #5388D9",
"g$\tc #4F84D5",
"h$\tc #4D82D3",
"i$\tc #4A7FD0",
"j$\tc #467CCC",
"k$\tc #4076C7",
"l$\tc #3D73C4",
"m$\tc #386EBF",
"n$\tc #3369BA",
"o$\tc #2D65B5",
"p$\tc #2961B1",
"q$\tc #225AA7",
"                                                                ",
"                        . +                                     ",
"                        @ # $ %                                 ",
"                      & * = - ; >                               ",
"                      , \' ) ! ~ { ] ^                           ",
"                    / ( _ : < [ } | 1 2 3                       ",
"                    4 5 6 7 8 9 0 a b c d e f                   ",
"                  g h i j k l m n o p q r s t u v               ",
"                  w x y z A B C D E F G H I J K L M N           ",
"                O P Q z R S T U V W X Y Z `  ...+.@.#.$.%.      ",
"                &.*.=.R B -.U ;.>.,.\'.).!.~.{.].^./.(._.:.<.[.  ",
"                }.|.1.2.-.3.4.>.5.6.7.8.9.0.a.b.c.d.e.f.g.h.i.  ",
"              j.k.l.m.n.o.4.p.q.r.s.t.u.v.w.x.y.z.A.B.C.D.E.F.  ",
"  G.H.G.I.J.K.L.M.N.O.P.Q.R.S.T.U.V.W.X.Y.Z.`. +.+++@+#+$+%+&+  ",
"  *+=+-+;+>+,+\'+)+!+~+{+]+^+/+(+_+:+<+[+}+|+1+2+3+4+5+6+7+8+    ",
"  9+-+0+a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+    ",
"  A+B+C+D+E+F+G+H+I+J+K+L+M+N+O+P+Q+R+S+T+U+V+W+X+Y+Z+Z+`+      ",
"   @.@+@@@#@$@%@&@*@=@-@;@>@,@\'@)@!@~@{@]@^@/@(@_@:@<@[@}@      ",
"  |@1@2@3@4@5@6@7@8@9@-@0@a@b@c@d@e@{@f@g@h@i@j@k@l@m@n@        ",
"  o@1@@@p@q@%@6@r@s@9@t@u@v@w@w@e@x@y@z@A@B@C@D@E@F@G@H@        ",
"  I@2@J@p@K@L@M@N@s@O@P@Q@R@R@S@T@y@U@V@W@X@Y@Z@`@ #.#          ",
"  +#+@J@@#5@##$#=@%#t@&#S@R@*#=#-#;#>#,#\'#)#!#~#{#]#^#          ",
"  /#2@p@K@(#M@_#:#<#[#}#|#1#2#3#;#4#5#\'#6#7#8#9#0#a#            ",
"  b#@@p@K@c#7@d#%#e#&#f#1#g#h#i#j#k#l#m#n#o#p#q#r#s#            ",
"  t#J@@#u###N@v#w#x#}#f#1#y#z#A#B#C#D#E#F#G#H#I#J#              ",
"  K#J@q@(#L#M#N#O#P#}#Q#R#S#T#B#U#V#W#X#Y#Z#`# $.$              ",
"  +$p@5@M@@$#$$$%$&$*$Q#=$-$;$>$,$W#\'$)$!$~$                    ",
"  {$%#e#]$^$/$($_$:$<$[$S#}$|$1$2$\'$3$4$5$6$                    ",
"  7$8$9$0$a$b$c$d$e$f$g$h$i$j$k$l$m$n$o$p$q$                    ",
"                                                                ",
"                                                                ",
"                                                                "
};
static Fl_Image *image_run() {
  static Fl_Image *image = new Fl_Pixmap(idata_run);
  return image;
}

Fl_Input *input_open=(Fl_Input *)0;

static void cb_OK(Fl_Button*, void*) {
  char cmdi[PATH_MAX];
 	strncpy( cmdi , " "  , PATH_MAX );
	strncat( cmdi , "  screen -d -m  " , PATH_MAX - strlen( cmdi ) -1 );
	strncat( cmdi , input_open->value() , PATH_MAX - strlen( cmdi ) -1 );
	strncat( cmdi , " " , PATH_MAX - strlen( cmdi ) -1 );
	system(  cmdi );
	
	
	 exit( 0 );
}

static void cb_Cancel(Fl_Button*, void*) {
  exit( 0 );
}

Fl_Double_Window* make_window() {
  { win3 = new Fl_Double_Window(370, 195, "Run Command");
    { Fl_Box* o = new Fl_Box(10, 10, 55, 55);
      o->image( image_run() );
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(70, 10, 290, 69, "Enter the name of the application you would like to run or the URL you would \
like to view");
      o->align(Fl_Align(132|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { input_open = new Fl_Input(70, 90, 290, 25, "Open:");
    } // Fl_Input* input_open
    { Fl_Check_Button* o = new Fl_Check_Button(70, 125, 290, 25, "Run in terminal");
      o->down_box(FL_DOWN_BOX);
    } // Fl_Check_Button* o
    { Fl_Button* o = new Fl_Button(175, 160, 90, 25, "&OK");
      o->callback((Fl_Callback*)cb_OK);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(270, 160, 90, 25, "&Cancel");
      o->callback((Fl_Callback*)cb_Cancel);
    } // Fl_Button* o
    win3->end();
  } // Fl_Double_Window* win3
  return win3;
}

int main() {
  printf( "FXRUN\n" );
     
     
   
    
      make_window();
      win3->show(); 
      
   
  
    
      return(Fl::run());
}
