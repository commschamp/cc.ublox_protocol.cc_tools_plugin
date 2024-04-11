// Generated by commsdsl2tools_qt v6.3.2

#include "CfgDatPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgDatPoll.h"

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

class CfgDatPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgDatPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgDatPollImpl
    >
{
public:
    CfgDatPollImpl() = default;
    CfgDatPollImpl(const CfgDatPollImpl&) = delete;
    CfgDatPollImpl(CfgDatPollImpl&&) = delete;
    virtual ~CfgDatPollImpl() = default;
    CfgDatPollImpl& operator=(const CfgDatPollImpl&) = default;
    CfgDatPollImpl& operator=(CfgDatPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDatPoll::CfgDatPoll() : m_pImpl(new CfgDatPollImpl) {}
CfgDatPoll::~CfgDatPoll() = default;

CfgDatPoll& CfgDatPoll::operator=(const CfgDatPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDatPoll& CfgDatPoll::operator=(CfgDatPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgDatPoll::MsgIdParamType CfgDatPoll::doGetId()
{
    return ::cc_ublox::message::CfgDatPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgDatPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDatPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDatPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDatPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDatPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDatPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDatPoll::MsgIdParamType CfgDatPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDatPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDatPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDatPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDatPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDatPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
