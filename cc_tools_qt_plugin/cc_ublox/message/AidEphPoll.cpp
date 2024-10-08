// Generated by commsdsl2tools_qt v6.3.4

#include "AidEphPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidEphPoll.h"

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

class AidEphPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidEphPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidEphPollImpl
    >
{
public:
    AidEphPollImpl() = default;
    AidEphPollImpl(const AidEphPollImpl&) = delete;
    AidEphPollImpl(AidEphPollImpl&&) = delete;
    virtual ~AidEphPollImpl() = default;
    AidEphPollImpl& operator=(const AidEphPollImpl&) = default;
    AidEphPollImpl& operator=(AidEphPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidEphPoll::AidEphPoll() : m_pImpl(new AidEphPollImpl) {}
AidEphPoll::~AidEphPoll() = default;

AidEphPoll& AidEphPoll::operator=(const AidEphPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidEphPoll& AidEphPoll::operator=(AidEphPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidEphPoll::MsgIdParamType AidEphPoll::doGetId()
{
    return ::cc_ublox::message::AidEphPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidEphPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidEphPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidEphPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidEphPoll::resetImpl()
{
    m_pImpl->reset();
}

bool AidEphPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidEphPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidEphPoll::MsgIdParamType AidEphPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidEphPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidEphPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidEphPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidEphPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidEphPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
