//泷山弟子
inherit NPC;
void create()
{
        set_name("儒门护卫",({"door scholar","scholar"}));
        set("gender","男性");
        set("age",25);
        set("family/family_name","儒门");
        set("class","scholar");
        set("force",1500);
        set("max_force",1500);
        set("force_factor",10);
        set("str",25);
        set("long","儒门中的高阶儒生之一，被托负重任守卫大门。\n");
        set("combat_exp",200000);
        set_skill("stabber",70);
        set_skill("dodge",60);
        set_skill("parry",70);
        set_skill("force",60);
        set_skill("poetforce",60);
        set_skill("knowpen",80);
        set_skill("winter-steps",40);
        map_skill("dodge","winter-steps");
        map_skill("parry","knowpen");
        map_skill("stabber","knowpen");
        map_skill("force","poetforce");
        setup();
        carry_object("/open/scholar/obj/pen2")->wield();
        add_money("gold",15);
}
int accept_fight(object who)
{
return notify_fail("儒门护卫说道 : 现在正在值勤中 , 请不要打扰好不好。\n");
}

