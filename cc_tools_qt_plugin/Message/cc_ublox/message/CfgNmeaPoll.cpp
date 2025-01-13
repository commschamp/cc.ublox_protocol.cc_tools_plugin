// Generated by commsdsl2tools_qt v7.0.0

#include "CfgNmeaPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgNmeaPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgNmeaPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgNmeaPoll,
        CfgNmeaPollImpl
    >
{
public:
    CfgNmeaPollImpl() = default;
    CfgNmeaPollImpl(const CfgNmeaPollImpl&) = default;
    CfgNmeaPollImpl(CfgNmeaPollImpl&&) = default;
    virtual ~CfgNmeaPollImpl() = default;
    CfgNmeaPollImpl& operator=(const CfgNmeaPollImpl&) = default;
    CfgNmeaPollImpl& operator=(CfgNmeaPollImpl&&) = default;
};

CfgNmeaPoll::CfgNmeaPoll() : m_pImpl(new CfgNmeaPollImpl) {}
CfgNmeaPoll::~CfgNmeaPoll() = default;

CfgNmeaPoll& CfgNmeaPoll::operator=(const CfgNmeaPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaPoll& CfgNmeaPoll::operator=(CfgNmeaPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNmeaPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgNmeaPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgNmeaPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgNmeaPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgNmeaPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgNmeaPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgNmeaPoll::DataSeq CfgNmeaPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgNmeaPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgNmeaPoll::Ptr CfgNmeaPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgNmeaPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgNmeaPoll(std::move(impl)));
}

void CfgNmeaPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgNmeaPoll::DataSeq CfgNmeaPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgNmeaPoll::FieldsList CfgNmeaPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgNmeaPoll::FieldsList CfgNmeaPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgNmeaPoll::CfgNmeaPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
