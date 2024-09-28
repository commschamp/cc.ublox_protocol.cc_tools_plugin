// Generated by commsdsl2tools_qt v6.3.4

#include "TimVcocal.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/TimVcocal.h"

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
    using Field = ::cc_ublox::message::TimVcocalFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::TimVcocalFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_oscId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OscId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Internal", 0)
            .add("External", 1)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gainUncertainty(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GainUncertainty;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(9U)
            .asMap();
}

static QVariantMap createProps_gainVco(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimVcocalFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GainVco;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(9U)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_oscId(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_gainUncertainty(false));
    props.append(createProps_gainVco(false));
    return props;
}

} // namespace

class TimVcocalImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::TimVcocal<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        TimVcocalImpl
    >
{
public:
    TimVcocalImpl() = default;
    TimVcocalImpl(const TimVcocalImpl&) = delete;
    TimVcocalImpl(TimVcocalImpl&&) = delete;
    virtual ~TimVcocalImpl() = default;
    TimVcocalImpl& operator=(const TimVcocalImpl&) = default;
    TimVcocalImpl& operator=(TimVcocalImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVcocal::TimVcocal() : m_pImpl(new TimVcocalImpl) {}
TimVcocal::~TimVcocal() = default;

TimVcocal& TimVcocal::operator=(const TimVcocal& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVcocal& TimVcocal::operator=(TimVcocal&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

TimVcocal::MsgIdParamType TimVcocal::doGetId()
{
    return ::cc_ublox::message::TimVcocal<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* TimVcocal::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVcocal::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVcocal::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVcocal::resetImpl()
{
    m_pImpl->reset();
}

bool TimVcocal::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVcocal*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVcocal::MsgIdParamType TimVcocal::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVcocal::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVcocal::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVcocal::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVcocal::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVcocal::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
