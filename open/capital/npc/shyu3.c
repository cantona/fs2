// guard.c

#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
                  set_name("徐肉轩", ({ "lo shyu","lo","shyu" }) );
	set("gender", "男性" );
 set("age",20);
        set("str",35);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
     set("long","他是徐大夫的龟儿子,专门帮人变脸的,\n"
                 "你可以问他有关变脸的事情。\n");
	set("combat_exp",338);
	set("attitude", "peaceful");
        set("inquiry", ([
            "变脸"    :"如果你准备好了,就下 faceoff 指令,好让我开始手术。",
            "变性"    :"变性ㄚ!!那是我老爸的专长,我可不会,别想叫我退费哦。",
            "退费"    :"他ㄌㄟㄌㄟ的,敢叫我退费",
        ]) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        carry_object("/obj/cloth")->wear();
}

