// Generated by commsdsl2tools_qt v7.1.0

#include "CfgNmeaV0.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgNmeaV0.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgNmeaV0Impl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgNmeaV0,
        CfgNmeaV0Impl
    >
{
public:
    CfgNmeaV0Impl() = default;
    CfgNmeaV0Impl(const CfgNmeaV0Impl&) = default;
    CfgNmeaV0Impl(CfgNmeaV0Impl&&) = default;
    virtual ~CfgNmeaV0Impl() = default;
    CfgNmeaV0Impl& operator=(const CfgNmeaV0Impl&) = default;
    CfgNmeaV0Impl& operator=(CfgNmeaV0Impl&&) = default;
};

CfgNmeaV0::CfgNmeaV0() : m_pImpl(new CfgNmeaV0Impl) {}
CfgNmeaV0::~CfgNmeaV0() = default;

CfgNmeaV0& CfgNmeaV0::operator=(const CfgNmeaV0& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaV0& CfgNmeaV0::operator=(CfgNmeaV0&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNmeaV0::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgNmeaV0::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgNmeaV0::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgNmeaV0::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgNmeaV0::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaV0::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaV0*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgNmeaV0::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgNmeaV0::DataSeq CfgNmeaV0::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgNmeaV0::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgNmeaV0::Ptr CfgNmeaV0::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgNmeaV0Impl*>(m_pImpl->clone().release()));
    return Ptr(new CfgNmeaV0(std::move(impl)));
}

void CfgNmeaV0::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgNmeaV0::DataSeq CfgNmeaV0::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgNmeaV0::FieldsList CfgNmeaV0::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgNmeaV0::FieldsList CfgNmeaV0::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgNmeaV0::CfgNmeaV0(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
