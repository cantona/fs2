inherit NPC;
void create()
{
        set_name("纪嫣然",({"chi-yen ran ","ran",}));
        set("gender","女性");
        set("age",25);
        set("str",25);
        set("bellicosity", 100);
        set("title","石才女");
        set("long","一个有倾城之色的绝世美女 ,她正在梳着她那又黑又亮的秀发 ,
不过 ,可别动她的歪脑筋喔 ,她可是一名数一数二的剑手喔 !\n");
        set("combat_exp",400000);
        set("max_kee",1200);
        set("kee",1200);
        set("max_force",1300);
        set("force",1300);
        set_skill("sword",90);
        set_skill("parry",40);
        set_skill("dodge",100);
        set_skill("force",60);
/*	没这个 skill 吧!?	arthur
        set_skill("wusword",80);
*/
        set_skill("paull-steps",120);
        set_skill("dreamforce",80);
        map_skill("sword","wusword");
        map_skill("parry","wusword");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        
        set("chat_chance",10);
        set("chat_msg",({
                "纪嫣然吟道 : 绝对权力的绝对腐化 ...\n",
                "纪嫣然说 : 真是好句子 .\n",
                }));
        setup();
}

