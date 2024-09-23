// Generated by commsdsl2tools_qt v6.3.4

#include "MonRxbufPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonRxbufPoll.h"

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

class MonRxbufPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonRxbufPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonRxbufPollImpl
    >
{
public:
    MonRxbufPollImpl() = default;
    MonRxbufPollImpl(const MonRxbufPollImpl&) = delete;
    MonRxbufPollImpl(MonRxbufPollImpl&&) = delete;
    virtual ~MonRxbufPollImpl() = default;
    MonRxbufPollImpl& operator=(const MonRxbufPollImpl&) = default;
    MonRxbufPollImpl& operator=(MonRxbufPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonRxbufPoll::MonRxbufPoll() : m_pImpl(new MonRxbufPollImpl) {}
MonRxbufPoll::~MonRxbufPoll() = default;

MonRxbufPoll& MonRxbufPoll::operator=(const MonRxbufPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRxbufPoll& MonRxbufPoll::operator=(MonRxbufPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonRxbufPoll::MsgIdParamType MonRxbufPoll::doGetId()
{
    return ::cc_ublox::message::MonRxbufPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonRxbufPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonRxbufPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonRxbufPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonRxbufPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonRxbufPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonRxbufPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonRxbufPoll::MsgIdParamType MonRxbufPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonRxbufPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonRxbufPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonRxbufPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonRxbufPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonRxbufPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
