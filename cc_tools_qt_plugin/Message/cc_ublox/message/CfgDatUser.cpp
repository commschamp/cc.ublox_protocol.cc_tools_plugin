// Generated by commsdsl2tools_qt v7.0.3

#include "CfgDatUser.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgDatUser.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgDatUserImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgDatUser,
        CfgDatUserImpl
    >
{
public:
    CfgDatUserImpl() = default;
    CfgDatUserImpl(const CfgDatUserImpl&) = default;
    CfgDatUserImpl(CfgDatUserImpl&&) = default;
    virtual ~CfgDatUserImpl() = default;
    CfgDatUserImpl& operator=(const CfgDatUserImpl&) = default;
    CfgDatUserImpl& operator=(CfgDatUserImpl&&) = default;
};

CfgDatUser::CfgDatUser() : m_pImpl(new CfgDatUserImpl) {}
CfgDatUser::~CfgDatUser() = default;

CfgDatUser& CfgDatUser::operator=(const CfgDatUser& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDatUser& CfgDatUser::operator=(CfgDatUser&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDatUser::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgDatUser::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgDatUser::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgDatUser::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgDatUser::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDatUser::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgDatUser*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgDatUser::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgDatUser::DataSeq CfgDatUser::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgDatUser::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgDatUser::Ptr CfgDatUser::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgDatUserImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgDatUser(std::move(impl)));
}

void CfgDatUser::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgDatUser::DataSeq CfgDatUser::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgDatUser::FieldsList CfgDatUser::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgDatUser::FieldsList CfgDatUser::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgDatUser::CfgDatUser(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
