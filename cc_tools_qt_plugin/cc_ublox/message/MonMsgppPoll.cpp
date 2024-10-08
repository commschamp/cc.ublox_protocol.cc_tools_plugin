// Generated by commsdsl2tools_qt v6.3.4

#include "MonMsgppPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonMsgppPoll.h"

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

class MonMsgppPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonMsgppPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonMsgppPollImpl
    >
{
public:
    MonMsgppPollImpl() = default;
    MonMsgppPollImpl(const MonMsgppPollImpl&) = delete;
    MonMsgppPollImpl(MonMsgppPollImpl&&) = delete;
    virtual ~MonMsgppPollImpl() = default;
    MonMsgppPollImpl& operator=(const MonMsgppPollImpl&) = default;
    MonMsgppPollImpl& operator=(MonMsgppPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonMsgppPoll::MonMsgppPoll() : m_pImpl(new MonMsgppPollImpl) {}
MonMsgppPoll::~MonMsgppPoll() = default;

MonMsgppPoll& MonMsgppPoll::operator=(const MonMsgppPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonMsgppPoll& MonMsgppPoll::operator=(MonMsgppPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonMsgppPoll::MsgIdParamType MonMsgppPoll::doGetId()
{
    return ::cc_ublox::message::MonMsgppPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonMsgppPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonMsgppPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonMsgppPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonMsgppPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonMsgppPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonMsgppPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonMsgppPoll::MsgIdParamType MonMsgppPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonMsgppPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonMsgppPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonMsgppPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonMsgppPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonMsgppPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
