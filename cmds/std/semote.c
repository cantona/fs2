// /cmds/std/semote.c
// 本档案改自 es2  mudlib
// 欢迎流传本档案, 请保留本档头
// wade 1998/7/10

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string        *e, buf;
  mapping       emotes;
  int           i;

  emotes = EMOTE_D->query_all_emotes();
  e = sort_array(EMOTE_D->query_all_emote(), "sort_keys", this_object());

  buf = "";
  for(i=0; i<sizeof(e); i++)
    buf += sprintf("%-26s%s", e[i]+"("+emotes[e[i]]["short"]+")", (i%3==2)?"\n": "");
  buf += "\n";
  me->start_more (buf);
  return 1;
}

int sort_keys (string key1, string key2)
{
  return strcmp (key1, key2);
}

int help(object me)
{
  write(@HELP
指令格式 : semote
指令说明 :
           这个指令可以列出目前所能使用的动作。
           动作除了可以直接用，有点类似说话以外，
           还可以配合 chat* 来用， 类似 chat。
使用范例 :
           semote
           smile
           chat* smile
HELP
    );
    return 1;
}
