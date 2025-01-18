// Generated by commsdsl2tools_qt v7.0.2

#include "CfgMsgCurrent.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgMsgCurrent.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgMsgCurrentImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgMsgCurrent,
        CfgMsgCurrentImpl
    >
{
public:
    CfgMsgCurrentImpl() = default;
    CfgMsgCurrentImpl(const CfgMsgCurrentImpl&) = default;
    CfgMsgCurrentImpl(CfgMsgCurrentImpl&&) = default;
    virtual ~CfgMsgCurrentImpl() = default;
    CfgMsgCurrentImpl& operator=(const CfgMsgCurrentImpl&) = default;
    CfgMsgCurrentImpl& operator=(CfgMsgCurrentImpl&&) = default;
};

CfgMsgCurrent::CfgMsgCurrent() : m_pImpl(new CfgMsgCurrentImpl) {}
CfgMsgCurrent::~CfgMsgCurrent() = default;

CfgMsgCurrent& CfgMsgCurrent::operator=(const CfgMsgCurrent& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgMsgCurrent& CfgMsgCurrent::operator=(CfgMsgCurrent&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgMsgCurrent::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgMsgCurrent::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgMsgCurrent::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgMsgCurrent::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgMsgCurrent::resetImpl()
{
    m_pImpl->reset();
}

bool CfgMsgCurrent::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgMsgCurrent*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgMsgCurrent::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgMsgCurrent::DataSeq CfgMsgCurrent::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgMsgCurrent::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgMsgCurrent::Ptr CfgMsgCurrent::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgMsgCurrentImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgMsgCurrent(std::move(impl)));
}

void CfgMsgCurrent::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgMsgCurrent::DataSeq CfgMsgCurrent::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgMsgCurrent::FieldsList CfgMsgCurrent::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgMsgCurrent::FieldsList CfgMsgCurrent::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgMsgCurrent::CfgMsgCurrent(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
