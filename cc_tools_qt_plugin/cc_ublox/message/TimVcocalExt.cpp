// Generated by commsdsl2tools_qt v6.3.4

#include "TimVcocalExt.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/TimVcocalExt.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_oscId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OscId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Internal", 0)
            .add("External", 1)
            .asMap();
}

static QVariantMap createProps_srcId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SrcId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Internal", 0)
            .add("GNSS", 1)
            .add("EXTINT0", 2)
            .add("EXTINT1", 3)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_raw0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Raw0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_raw1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Raw1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_maxStepSize(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalExtFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MaxStepSize;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_oscId(false));
    props.append(createProps_srcId(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_raw0(false));
    props.append(createProps_raw1(false));
    props.append(createProps_maxStepSize(false));
    return props;
}

} // namespace

class TimVcocalExtImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::TimVcocalExt<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        TimVcocalExtImpl
    >
{
public:
    TimVcocalExtImpl() = default;
    TimVcocalExtImpl(const TimVcocalExtImpl&) = delete;
    TimVcocalExtImpl(TimVcocalExtImpl&&) = delete;
    virtual ~TimVcocalExtImpl() = default;
    TimVcocalExtImpl& operator=(const TimVcocalExtImpl&) = default;
    TimVcocalExtImpl& operator=(TimVcocalExtImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVcocalExt::TimVcocalExt() : m_pImpl(new TimVcocalExtImpl) {}
TimVcocalExt::~TimVcocalExt() = default;

TimVcocalExt& TimVcocalExt::operator=(const TimVcocalExt& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVcocalExt& TimVcocalExt::operator=(TimVcocalExt&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

TimVcocalExt::MsgIdParamType TimVcocalExt::doGetId()
{
    return ::cc_ublox::message::TimVcocalExt<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* TimVcocalExt::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVcocalExt::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVcocalExt::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVcocalExt::resetImpl()
{
    m_pImpl->reset();
}

bool TimVcocalExt::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVcocalExt*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVcocalExt::MsgIdParamType TimVcocalExt::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVcocalExt::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVcocalExt::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVcocalExt::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVcocalExt::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVcocalExt::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
