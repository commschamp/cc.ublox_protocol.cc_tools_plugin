// Generated by commsdsl2tools_qt v7.0.2

#include "CfgNmeaV1.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgNmeaV1.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgNmeaV1Impl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgNmeaV1,
        CfgNmeaV1Impl
    >
{
public:
    CfgNmeaV1Impl() = default;
    CfgNmeaV1Impl(const CfgNmeaV1Impl&) = default;
    CfgNmeaV1Impl(CfgNmeaV1Impl&&) = default;
    virtual ~CfgNmeaV1Impl() = default;
    CfgNmeaV1Impl& operator=(const CfgNmeaV1Impl&) = default;
    CfgNmeaV1Impl& operator=(CfgNmeaV1Impl&&) = default;
};

CfgNmeaV1::CfgNmeaV1() : m_pImpl(new CfgNmeaV1Impl) {}
CfgNmeaV1::~CfgNmeaV1() = default;

CfgNmeaV1& CfgNmeaV1::operator=(const CfgNmeaV1& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaV1& CfgNmeaV1::operator=(CfgNmeaV1&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNmeaV1::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgNmeaV1::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgNmeaV1::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgNmeaV1::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgNmeaV1::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaV1::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaV1*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgNmeaV1::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgNmeaV1::DataSeq CfgNmeaV1::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgNmeaV1::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgNmeaV1::Ptr CfgNmeaV1::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgNmeaV1Impl*>(m_pImpl->clone().release()));
    return Ptr(new CfgNmeaV1(std::move(impl)));
}

void CfgNmeaV1::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgNmeaV1::DataSeq CfgNmeaV1::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgNmeaV1::FieldsList CfgNmeaV1::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgNmeaV1::FieldsList CfgNmeaV1::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgNmeaV1::CfgNmeaV1(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
