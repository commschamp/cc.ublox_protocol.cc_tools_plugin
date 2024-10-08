// Generated by commsdsl2tools_qt v6.3.4

#include "NavTimebdsPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavTimebdsPoll.h"

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

class NavTimebdsPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavTimebdsPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavTimebdsPollImpl
    >
{
public:
    NavTimebdsPollImpl() = default;
    NavTimebdsPollImpl(const NavTimebdsPollImpl&) = delete;
    NavTimebdsPollImpl(NavTimebdsPollImpl&&) = delete;
    virtual ~NavTimebdsPollImpl() = default;
    NavTimebdsPollImpl& operator=(const NavTimebdsPollImpl&) = default;
    NavTimebdsPollImpl& operator=(NavTimebdsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimebdsPoll::NavTimebdsPoll() : m_pImpl(new NavTimebdsPollImpl) {}
NavTimebdsPoll::~NavTimebdsPoll() = default;

NavTimebdsPoll& NavTimebdsPoll::operator=(const NavTimebdsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimebdsPoll& NavTimebdsPoll::operator=(NavTimebdsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavTimebdsPoll::MsgIdParamType NavTimebdsPoll::doGetId()
{
    return ::cc_ublox::message::NavTimebdsPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavTimebdsPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimebdsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimebdsPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimebdsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimebdsPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimebdsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimebdsPoll::MsgIdParamType NavTimebdsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimebdsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimebdsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimebdsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimebdsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimebdsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
