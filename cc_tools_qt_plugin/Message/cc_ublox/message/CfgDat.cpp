// Generated by commsdsl2tools_qt v7.0.2

#include "CfgDat.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgDat.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgDatImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgDat,
        CfgDatImpl
    >
{
public:
    CfgDatImpl() = default;
    CfgDatImpl(const CfgDatImpl&) = default;
    CfgDatImpl(CfgDatImpl&&) = default;
    virtual ~CfgDatImpl() = default;
    CfgDatImpl& operator=(const CfgDatImpl&) = default;
    CfgDatImpl& operator=(CfgDatImpl&&) = default;
};

CfgDat::CfgDat() : m_pImpl(new CfgDatImpl) {}
CfgDat::~CfgDat() = default;

CfgDat& CfgDat::operator=(const CfgDat& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDat& CfgDat::operator=(CfgDat&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDat::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgDat::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgDat::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgDat::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgDat::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDat::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgDat*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgDat::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgDat::DataSeq CfgDat::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgDat::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgDat::Ptr CfgDat::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgDatImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgDat(std::move(impl)));
}

void CfgDat::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgDat::DataSeq CfgDat::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgDat::FieldsList CfgDat::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgDat::FieldsList CfgDat::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgDat::CfgDat(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
