#include "vertexData.h"

int32 vertexData::findOrPush(FVector target)
{
	int32 index = data.Find(target);
	if (index == INDEX_NONE)
	{
		//���û��������㣬�½�һ����ȥ
		data.Push(target);
		index = data.Num();
		return index;
	}
	else
	{
		return index+1;
	}

}