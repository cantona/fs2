inherit NPC;
inherit F_SAVE;

mapping quest_list = ([]);
string do_save (object me);
string do_quests (object me);

void create()
{
  // set("race", "机器人");
  set_name("任务问答机", ({ "quests man", "man" }) );
  restore();
  set ("inquiry", ([
       "save"	: (: do_save :),
       "quests" : (: do_quests :),
  ]) );

  quest_list = query("quests");
  setup();
}

// 传回所有任务的英文字串
string do_quests (object me)
{
  string	*quests_name;
  string	line;
  int		i;

  line = "目前狂想空间共有 \n";

  if (!mapp (quest_list) || sizeof (quest_list) == 0)
    return "目前狂想空间没有任何任务\n";

  quests_name = keys (quest_list);
  for (i=0; i<sizeof (quest_list); i++)
     line += sprintf ("第%2d个 : %20s %s\n", i+1, quests_name[i],
             quest_list[quests_name[i]]);
  return line;
}

void remove(object ob) { save(); }

string query_save_file() { return QUEST; }

// 删除一件任务
int delete_quest (string quest)
{
  // if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  // 从 quest_list 删除一个 quest
  map_delete(quest_list, quest);

  save();
  return 1;
}

// 安装一个 quest
int install_quest (string quest, string chinese)
{
  // if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  quest_list[quest] = chinese;

  save();
  return 1;
}

string get_quest_name (string quest)
{
  return quest_list[quest];
}

string do_save (object me)
{
  save();
  return "【任务问答机】: 任务已经存档完成。\n";
}
