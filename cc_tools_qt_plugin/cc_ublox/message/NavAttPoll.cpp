// Generated by commsdsl2tools_qt v6.3.2

#include "NavAttPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavAttPoll.h"

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

class NavAttPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavAttPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavAttPollImpl
    >
{
public:
    NavAttPollImpl() = default;
    NavAttPollImpl(const NavAttPollImpl&) = delete;
    NavAttPollImpl(NavAttPollImpl&&) = delete;
    virtual ~NavAttPollImpl() = default;
    NavAttPollImpl& operator=(const NavAttPollImpl&) = default;
    NavAttPollImpl& operator=(NavAttPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAttPoll::NavAttPoll() : m_pImpl(new NavAttPollImpl) {}
NavAttPoll::~NavAttPoll() = default;

NavAttPoll& NavAttPoll::operator=(const NavAttPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAttPoll& NavAttPoll::operator=(NavAttPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavAttPoll::MsgIdParamType NavAttPoll::doGetId()
{
    return ::cc_ublox::message::NavAttPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavAttPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAttPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAttPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAttPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavAttPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAttPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAttPoll::MsgIdParamType NavAttPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAttPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAttPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAttPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAttPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAttPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
