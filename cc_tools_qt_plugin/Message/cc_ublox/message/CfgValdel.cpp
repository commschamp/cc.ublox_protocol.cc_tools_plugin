// Generated by commsdsl2tools_qt v7.1.0

#include "CfgValdel.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgValdel.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgValdelImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgValdel,
        CfgValdelImpl
    >
{
public:
    CfgValdelImpl() = default;
    CfgValdelImpl(const CfgValdelImpl&) = default;
    CfgValdelImpl(CfgValdelImpl&&) = default;
    virtual ~CfgValdelImpl() = default;
    CfgValdelImpl& operator=(const CfgValdelImpl&) = default;
    CfgValdelImpl& operator=(CfgValdelImpl&&) = default;
};

CfgValdel::CfgValdel() : m_pImpl(new CfgValdelImpl) {}
CfgValdel::~CfgValdel() = default;

CfgValdel& CfgValdel::operator=(const CfgValdel& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgValdel& CfgValdel::operator=(CfgValdel&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgValdel::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgValdel::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgValdel::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgValdel::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgValdel::resetImpl()
{
    m_pImpl->reset();
}

bool CfgValdel::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgValdel*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgValdel::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgValdel::DataSeq CfgValdel::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgValdel::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgValdel::Ptr CfgValdel::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgValdelImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgValdel(std::move(impl)));
}

void CfgValdel::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgValdel::DataSeq CfgValdel::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgValdel::FieldsList CfgValdel::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgValdel::FieldsList CfgValdel::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgValdel::CfgValdel(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
