// Generated by commsdsl2tools_qt v7.0.3

#include "CfgOdo.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgOdo.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgOdoImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgOdo,
        CfgOdoImpl
    >
{
public:
    CfgOdoImpl() = default;
    CfgOdoImpl(const CfgOdoImpl&) = default;
    CfgOdoImpl(CfgOdoImpl&&) = default;
    virtual ~CfgOdoImpl() = default;
    CfgOdoImpl& operator=(const CfgOdoImpl&) = default;
    CfgOdoImpl& operator=(CfgOdoImpl&&) = default;
};

CfgOdo::CfgOdo() : m_pImpl(new CfgOdoImpl) {}
CfgOdo::~CfgOdo() = default;

CfgOdo& CfgOdo::operator=(const CfgOdo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgOdo& CfgOdo::operator=(CfgOdo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgOdo::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgOdo::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgOdo::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgOdo::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgOdo::resetImpl()
{
    m_pImpl->reset();
}

bool CfgOdo::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgOdo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgOdo::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgOdo::DataSeq CfgOdo::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgOdo::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgOdo::Ptr CfgOdo::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgOdoImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgOdo(std::move(impl)));
}

void CfgOdo::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgOdo::DataSeq CfgOdo::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgOdo::FieldsList CfgOdo::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgOdo::FieldsList CfgOdo::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgOdo::CfgOdo(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
