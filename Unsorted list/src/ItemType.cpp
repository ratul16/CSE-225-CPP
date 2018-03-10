#include "ItemType.h"

ItemType::ItemType()
{
    value=0;
}

RelationType ItemType::CompareTo(ItemType otherItem)
{
    if(value <otherItem.value)
    return LESS;
    else if(value >otherItem.value)
        return GREATER;
    else return EQUAL;

}

void ItemType::Initialize(int number)
{
    value = number;
}

void ItemType::Print()
{
    cout<< value <<" ";
}
