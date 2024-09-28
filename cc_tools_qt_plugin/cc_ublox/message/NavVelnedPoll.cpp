// Generated by commsdsl2tools_qt v6.3.4

#include "NavVelnedPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavVelnedPoll.h"

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

class NavVelnedPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavVelnedPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavVelnedPollImpl
    >
{
public:
    NavVelnedPollImpl() = default;
    NavVelnedPollImpl(const NavVelnedPollImpl&) = delete;
    NavVelnedPollImpl(NavVelnedPollImpl&&) = delete;
    virtual ~NavVelnedPollImpl() = default;
    NavVelnedPollImpl& operator=(const NavVelnedPollImpl&) = default;
    NavVelnedPollImpl& operator=(NavVelnedPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavVelnedPoll::NavVelnedPoll() : m_pImpl(new NavVelnedPollImpl) {}
NavVelnedPoll::~NavVelnedPoll() = default;

NavVelnedPoll& NavVelnedPoll::operator=(const NavVelnedPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavVelnedPoll& NavVelnedPoll::operator=(NavVelnedPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavVelnedPoll::MsgIdParamType NavVelnedPoll::doGetId()
{
    return ::cc_ublox::message::NavVelnedPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavVelnedPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavVelnedPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavVelnedPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavVelnedPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavVelnedPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavVelnedPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavVelnedPoll::MsgIdParamType NavVelnedPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavVelnedPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavVelnedPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavVelnedPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavVelnedPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavVelnedPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
