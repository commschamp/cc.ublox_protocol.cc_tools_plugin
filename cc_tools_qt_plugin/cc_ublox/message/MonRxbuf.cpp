// Generated by commsdsl2tools_qt v6.3.2

#include "MonRxbuf.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonRxbuf.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

struct PendingMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonRxbufFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PendingMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct PendingMembers

static QVariantMap createProps_pending(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRxbufFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Pending;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(PendingMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

struct UsageMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonRxbufFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UsageMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct UsageMembers

static QVariantMap createProps_usage(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRxbufFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Usage;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(UsageMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

struct PeakUsageMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonRxbufFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PeakUsageMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct PeakUsageMembers

static QVariantMap createProps_peakUsage(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRxbufFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PeakUsage;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(PeakUsageMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_pending(false));
    props.append(createProps_usage(false));
    props.append(createProps_peakUsage(false));
    return props;
}

} // namespace

class MonRxbufImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonRxbuf<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonRxbufImpl
    >
{
public:
    MonRxbufImpl() = default;
    MonRxbufImpl(const MonRxbufImpl&) = delete;
    MonRxbufImpl(MonRxbufImpl&&) = delete;
    virtual ~MonRxbufImpl() = default;
    MonRxbufImpl& operator=(const MonRxbufImpl&) = default;
    MonRxbufImpl& operator=(MonRxbufImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonRxbuf::MonRxbuf() : m_pImpl(new MonRxbufImpl) {}
MonRxbuf::~MonRxbuf() = default;

MonRxbuf& MonRxbuf::operator=(const MonRxbuf& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRxbuf& MonRxbuf::operator=(MonRxbuf&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonRxbuf::MsgIdParamType MonRxbuf::doGetId()
{
    return ::cc_ublox::message::MonRxbuf<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonRxbuf::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonRxbuf::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonRxbuf::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonRxbuf::resetImpl()
{
    m_pImpl->reset();
}

bool MonRxbuf::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonRxbuf*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonRxbuf::MsgIdParamType MonRxbuf::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonRxbuf::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonRxbuf::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonRxbuf::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonRxbuf::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonRxbuf::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
