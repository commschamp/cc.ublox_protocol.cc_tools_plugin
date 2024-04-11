// Generated by commsdsl2tools_qt v6.3.2

#include "MonHw3Poll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonHw3Poll.h"

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

class MonHw3PollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonHw3Poll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonHw3PollImpl
    >
{
public:
    MonHw3PollImpl() = default;
    MonHw3PollImpl(const MonHw3PollImpl&) = delete;
    MonHw3PollImpl(MonHw3PollImpl&&) = delete;
    virtual ~MonHw3PollImpl() = default;
    MonHw3PollImpl& operator=(const MonHw3PollImpl&) = default;
    MonHw3PollImpl& operator=(MonHw3PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonHw3Poll::MonHw3Poll() : m_pImpl(new MonHw3PollImpl) {}
MonHw3Poll::~MonHw3Poll() = default;

MonHw3Poll& MonHw3Poll::operator=(const MonHw3Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw3Poll& MonHw3Poll::operator=(MonHw3Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonHw3Poll::MsgIdParamType MonHw3Poll::doGetId()
{
    return ::cc_ublox::message::MonHw3Poll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonHw3Poll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonHw3Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonHw3Poll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonHw3Poll::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw3Poll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonHw3Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonHw3Poll::MsgIdParamType MonHw3Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonHw3Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonHw3Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonHw3Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonHw3Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonHw3Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
