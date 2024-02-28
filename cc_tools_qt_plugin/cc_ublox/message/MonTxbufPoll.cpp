// Generated by commsdsl2tools_qt v6.3.0

#include "MonTxbufPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonTxbufPoll.h"

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

class MonTxbufPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonTxbufPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonTxbufPollImpl
    >
{
public:
    MonTxbufPollImpl() = default;
    MonTxbufPollImpl(const MonTxbufPollImpl&) = delete;
    MonTxbufPollImpl(MonTxbufPollImpl&&) = delete;
    virtual ~MonTxbufPollImpl() = default;
    MonTxbufPollImpl& operator=(const MonTxbufPollImpl&) = default;
    MonTxbufPollImpl& operator=(MonTxbufPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonTxbufPoll::MonTxbufPoll() : m_pImpl(new MonTxbufPollImpl) {}
MonTxbufPoll::~MonTxbufPoll() = default;

MonTxbufPoll& MonTxbufPoll::operator=(const MonTxbufPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonTxbufPoll& MonTxbufPoll::operator=(MonTxbufPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonTxbufPoll::MsgIdParamType MonTxbufPoll::doGetId()
{
    return ::cc_ublox::message::MonTxbufPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonTxbufPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonTxbufPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonTxbufPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonTxbufPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonTxbufPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonTxbufPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonTxbufPoll::MsgIdParamType MonTxbufPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonTxbufPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonTxbufPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonTxbufPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonTxbufPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonTxbufPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin