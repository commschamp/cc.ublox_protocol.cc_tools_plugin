// Generated by commsdsl2tools_qt v7.0.2

#include "CfgPmsPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgPmsPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgPmsPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgPmsPoll,
        CfgPmsPollImpl
    >
{
public:
    CfgPmsPollImpl() = default;
    CfgPmsPollImpl(const CfgPmsPollImpl&) = default;
    CfgPmsPollImpl(CfgPmsPollImpl&&) = default;
    virtual ~CfgPmsPollImpl() = default;
    CfgPmsPollImpl& operator=(const CfgPmsPollImpl&) = default;
    CfgPmsPollImpl& operator=(CfgPmsPollImpl&&) = default;
};

CfgPmsPoll::CfgPmsPoll() : m_pImpl(new CfgPmsPollImpl) {}
CfgPmsPoll::~CfgPmsPoll() = default;

CfgPmsPoll& CfgPmsPoll::operator=(const CfgPmsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPmsPoll& CfgPmsPoll::operator=(CfgPmsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPmsPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgPmsPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgPmsPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgPmsPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgPmsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPmsPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgPmsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgPmsPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgPmsPoll::DataSeq CfgPmsPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgPmsPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgPmsPoll::Ptr CfgPmsPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgPmsPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgPmsPoll(std::move(impl)));
}

void CfgPmsPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgPmsPoll::DataSeq CfgPmsPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgPmsPoll::FieldsList CfgPmsPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgPmsPoll::FieldsList CfgPmsPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgPmsPoll::CfgPmsPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
