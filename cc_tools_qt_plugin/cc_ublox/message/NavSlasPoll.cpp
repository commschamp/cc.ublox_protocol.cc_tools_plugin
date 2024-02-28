// Generated by commsdsl2tools_qt v6.3.0

#include "NavSlasPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavSlasPoll.h"

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

class NavSlasPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavSlasPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavSlasPollImpl
    >
{
public:
    NavSlasPollImpl() = default;
    NavSlasPollImpl(const NavSlasPollImpl&) = delete;
    NavSlasPollImpl(NavSlasPollImpl&&) = delete;
    virtual ~NavSlasPollImpl() = default;
    NavSlasPollImpl& operator=(const NavSlasPollImpl&) = default;
    NavSlasPollImpl& operator=(NavSlasPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSlasPoll::NavSlasPoll() : m_pImpl(new NavSlasPollImpl) {}
NavSlasPoll::~NavSlasPoll() = default;

NavSlasPoll& NavSlasPoll::operator=(const NavSlasPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSlasPoll& NavSlasPoll::operator=(NavSlasPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavSlasPoll::MsgIdParamType NavSlasPoll::doGetId()
{
    return ::cc_ublox::message::NavSlasPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavSlasPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSlasPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSlasPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSlasPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSlasPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSlasPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSlasPoll::MsgIdParamType NavSlasPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSlasPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSlasPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSlasPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSlasPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSlasPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
