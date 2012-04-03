// c_doc.c 制作帮派文件 by ACKY

void doc_edit( string str )
{
	write_file( "/doc/help/clan/"+this_player()->query("clan/name"), str, 1 );
	return;
}

int main( object me )
{
	if( !me->query("clan" ) || me->query("clan/rank") > 1 )
		return 0;
	me->edit( (: doc_edit :) );
	return 1;
}


int help( object me )
{
	write( "
	c_doc: 帮主编写帮派文件。

	可在文件里编写帮规, 帮派历史, 等资料。

	玩家 help <帮派中文名称> 即可阅\读帮派文件。

                                                         by ACKY 08/17/00
");
        return 1;
}
