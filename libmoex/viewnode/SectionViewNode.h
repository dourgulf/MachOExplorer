//
// Created by everettjf on 2017/8/6.
//

#ifndef MOEX_SECTIONVIEWNODE_H
#define MOEX_SECTIONVIEWNODE_H

#include "ViewNode.h"

MOEX_NAMESPACE_BEGIN

class SectionViewNode : public ViewNode{
private:
    MachSectionPtr d_;
public:
    void Init(MachSectionPtr d);
    std::string GetDisplayName()override;

    void InitViewDatas()override;

    void InitSpecialView();

    void InitCStringView(const std::string & title);
    void InitLiteralsView(const std::string & title,size_t unitsize);
    void InitPointersView(const std::string & title);
    void InitIndirectPointersView(const std::string & title);
    void InitIndirectStubsView(const std::string &title);

};
using SectionViewNodePtr = std::shared_ptr<SectionViewNode>;

class SectionViewNodeFactory{
public:
    static SectionViewNodePtr Create(MachSectionPtr d);
};


MOEX_NAMESPACE_END

#endif //MOEX_SECTIONVIEWNODE_H
