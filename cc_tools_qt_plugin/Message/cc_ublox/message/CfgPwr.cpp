// Generated by commsdsl2tools_qt v7.0.0

#include "CfgPwr.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgPwr.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgPwrImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgPwr,
        CfgPwrImpl
    >
{
public:
    CfgPwrImpl() = default;
    CfgPwrImpl(const CfgPwrImpl&) = default;
    CfgPwrImpl(CfgPwrImpl&&) = default;
    virtual ~CfgPwrImpl() = default;
    CfgPwrImpl& operator=(const CfgPwrImpl&) = default;
    CfgPwrImpl& operator=(CfgPwrImpl&&) = default;
};

CfgPwr::CfgPwr() : m_pImpl(new CfgPwrImpl) {}
CfgPwr::~CfgPwr() = default;

CfgPwr& CfgPwr::operator=(const CfgPwr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPwr& CfgPwr::operator=(CfgPwr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPwr::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgPwr::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgPwr::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgPwr::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgPwr::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPwr::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgPwr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgPwr::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgPwr::DataSeq CfgPwr::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgPwr::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgPwr::Ptr CfgPwr::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgPwrImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgPwr(std::move(impl)));
}

void CfgPwr::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgPwr::DataSeq CfgPwr::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgPwr::FieldsList CfgPwr::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgPwr::FieldsList CfgPwr::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgPwr::CfgPwr(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
