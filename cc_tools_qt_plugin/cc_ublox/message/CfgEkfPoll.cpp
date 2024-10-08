// Generated by commsdsl2tools_qt v6.3.4

#include "CfgEkfPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgEkfPoll.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class CfgEkfPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgEkfPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgEkfPollImpl
    >
{
public:
    CfgEkfPollImpl() = default;
    CfgEkfPollImpl(const CfgEkfPollImpl&) = delete;
    CfgEkfPollImpl(CfgEkfPollImpl&&) = delete;
    virtual ~CfgEkfPollImpl() = default;
    CfgEkfPollImpl& operator=(const CfgEkfPollImpl&) = default;
    CfgEkfPollImpl& operator=(CfgEkfPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgEkfPoll::CfgEkfPoll() : m_pImpl(new CfgEkfPollImpl) {}
CfgEkfPoll::~CfgEkfPoll() = default;

CfgEkfPoll& CfgEkfPoll::operator=(const CfgEkfPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgEkfPoll& CfgEkfPoll::operator=(CfgEkfPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgEkfPoll::MsgIdParamType CfgEkfPoll::doGetId()
{
    return ::cc_ublox::message::CfgEkfPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgEkfPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgEkfPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgEkfPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgEkfPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgEkfPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgEkfPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgEkfPoll::MsgIdParamType CfgEkfPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgEkfPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgEkfPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgEkfPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgEkfPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgEkfPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
