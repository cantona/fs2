// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
  set ("short", "藏经阁门口");
  set ("long", @LONG
这是藏经阁的门口，你看到门前一个硕大的匾额(sign)，上边以楷书
写着〔藏经阁〕三个大字，在门口的两侧有着两座栩栩如生的雕像，似乎
直盯着你看。
 
LONG);

 set("outdoors","/open/gsword/room");
  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/gsword/room/g5-12.c",
  "southwest" : "/open/gsword/room/g5-10.c",
]));

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "            ,,   ;;                                               ,,, 
          ';;  ,,;,,,;;        ,,,                   ,,,;';,  ;;'''';;
      ;;;'';;   ;  ,,          ;;     ;;;;''''       ;; ,,;;   ;,;' ;;
                ;;  ';        ;' ;;, ,   ,,  ;,       ;'' ;;   ; ,,,;;
     ,  ,,,,,,;';;''        ,;' ,;'  ;; ;;' ;'        ;,;'';;,,'''  ;;
     ;;  ; ,,,,,,;,  ,     ';'';'   ;' ,;  ';,,       ;   ,;'';;    ;;
     ;;''; ;';;  '; ,;'      ,;',;, ';, ';   ''       ;  ' ';;;     ;;
        ,; ;''';; ;;;'      ;;;'' '   ' ,,,,,,        ;   ,;' ';,,  ;;
   '';;';' ;,,,'   ;;         ,  ;, '''';;''         ,; ,';,,,;;;''';;
     ;' ;  ; ;,,, ;';;,  ,';, ';  '     ;;  ,,,,     ;;   ;;  ,;',,,;;
   ,'  ;' ''    ;;'  ';,;; ';     ,,;'''''''''''''   ';    ;''''  ';;;
",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/swordsman/chenun" :1,
]));

  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="east" && present("chen un",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("张乘云说道: 掌门有令,欲入藏经阁者,需得到他的同意,"
+RANK_D->query_respect(me)+"还是请回吧!\n");
return ::valid_leave(me,dir);
}
